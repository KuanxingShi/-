#include "mymysql.h"
#include <string.h>
#include <QMessageBox>

//建立这个类的目的是实现封装，封装所有和mysql相关的函数
mymysql::mymysql()
{
    mysql_init(&mysql);
    connection = NULL;//任何指针都要在构造函数里面初始化一下，避免悬空
    memset(buf, 0, sizeof(buf));
}

mymysql::~mymysql()
{
    if (connection)
    {
        mysql_close(connection);
        connection = NULL;
    }
}

int mymysql::sql_connect(const char *Hostname, const char *User, const char *Password, const char *DBName)
{
    connection = mysql_real_connect(&mysql, Hostname, User, Password, DBName, 0, 0, 0);
    if (connection == NULL)
    {
        memset(buf, 0, sizeof(buf));
        strcpy(buf, mysql_error(&mysql));
        //QMessageBox::information(0, "", mysql_error(&mysql));
        return -1;
    }else
    {
        mysql_query(connection, "set names utf8");
        return 0;
    }
}

const char *mymysql::geterror()
{
    return buf;
}

void mymysql::sql_disconnect()
{
    if (connection)
    {
        mysql_close(connection);
        connection = NULL;
    }
}

int mymysql::sql_exec(const char *SQL)
{
    if (mysql_query(connection, SQL) != 0)
    {
        memset(buf, 0, sizeof(buf));
        strcpy(buf, mysql_error(&mysql));
        return -1;
    }
    return 0;
}

/*int mymysql::sql_sel_result(const char *SQL, char *result)
{
    result = mysql_(connection,SQL);
    if(result != 0)
    {
        memset(buf, 0, sizeof(buf));
        strcpy(buf, mysql_error(&mysql));
        return -1;
    }
    return 0;
}*/

int mymysql::sql_open(const char *SQL, QStandardItemModel **p)
{
    if (mysql_query(connection, SQL) != 0)
    {
        memset(buf, 0, sizeof(buf));
        strcpy(buf, mysql_error(&mysql));
        return -1;
    }

    MYSQL_RES *result = mysql_store_result(connection);
    if (result == NULL)//没有查询结果
    {
        memset(buf, 0, sizeof(buf));
        strcpy(buf, mysql_error(&mysql));
        return -1;
    }

    int rowcount = mysql_affected_rows(connection);//这个函数返回SQL语句执行后又多少行
    int fieldcount = mysql_field_count(connection);//这个函数返回SQL语句执行后有多少列

    *p = new QStandardItemModel(rowcount, fieldcount);

    MYSQL_FIELD *field;
    int i = 0;
    int j = 0;
    for (i=0; i<fieldcount; i++)
    {
        field = mysql_fetch_field(result);
        (*p)->setHeaderData(i, Qt::Horizontal, field->name);
    }

    for (i=0; i<rowcount; i++)
    {
        MYSQL_ROW row = mysql_fetch_row(result);
        for (j=0; j<fieldcount; j++)
        {
            (*p)->setData((*p)->index(i, j, QModelIndex()),row[j]);
        }
    }

    mysql_free_result(result);

    return 0;
}







