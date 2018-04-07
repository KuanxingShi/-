#ifndef MYMYSQL_H
#define MYMYSQL_H

//路径中使用‘/’，这个C语言中的标识

//linux下的mysql.h和window下的不一样，所以要针对不同的编译器和系统进行条件编译

//windows下使用mysql.h的方法
#include <windows.h>
#include <C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h>

//linux下使用mysql.h的方法
//#include <mysql/mysql.h>

/*
 * int listen_st;//linux下的定义socket描述符的方法
 * SOCKET listen_st;//windows下的定义socket描述符的写法，在windows.h头文件下定义的
*/

#include <QStandardItemModel>

class mymysql
{
public:
    mymysql();
    virtual ~mymysql();

    int sql_connect(const char *Hostname, const char *User, const char *Password, const char *DBName);
    int sql_open(const char *SQL, QStandardItemModel **p);
    int sql_exec(const char *SQL);
    int sql_sel_result(const char *SQL, char *result);
    void sql_disconnect();
    const char *geterror();


private:
    MYSQL *connection;
    MYSQL mysql;
    char buf[1024];
};

#endif // MYMYSQL_H
