#include "logindlg.h"
#include <QGridLayout>
#include <QPalette>
#include <QMessageBox>

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent)
{
    this->setWindowTitle(tr("登录"));

    label0 = new QLabel(tr("用户名："));
    label1 = new QLabel(tr("密码："));
    label2 = new QLabel(tr("数据库名称："));
    label3 = new QLabel(tr("服务器IP："));

    lineEditUserID = new QLineEdit("root");
    lineEditPasswd = new QLineEdit("A04250011");
    lineEditPasswd->setEchoMode(QLineEdit::Password);
    lineEditDBName = new QLineEdit("toursim");
    lineEditHostIP = new QLineEdit("127.0.0.1");

    loginBtn = new QPushButton(tr("登录"));
    connect(loginBtn,SIGNAL(clicked()),this,SLOT(loginBtnOnclick()));
    logoutBtn = new QPushButton(tr("取消"));
    connect(logoutBtn,SIGNAL(clicked()),this,SLOT(logoutBtnOnclick()));

    QGridLayout *GLayout = new QGridLayout(this);
    GLayout->addWidget(label0,0,0);
    GLayout->addWidget(label1,1,0);
    GLayout->addWidget(label2,2,0);
    GLayout->addWidget(label3,3,0);

    GLayout->addWidget(lineEditUserID,0,1);
    GLayout->addWidget(lineEditPasswd,1,1);
    GLayout->addWidget(lineEditDBName,2,1);
    GLayout->addWidget(lineEditHostIP,3,1);

    GLayout->addWidget(loginBtn,4,0);
    GLayout->addWidget(logoutBtn,4,1);

    GLayout->setColumnStretch(0,1);//设置0列
    GLayout->setColumnStretch(1,1);//设置1列

    GLayout->setMargin(15);//设置边距
    GLayout->setSpacing(10);//设置控件与控件之间的大小
    GLayout->setSizeConstraint(QLayout::SetFixedSize);//设置对话框大小不可以改变

    //设置对话框的背景颜色或者图片
    this->setAutoFillBackground(true);
    QPalette palette;
    //palette.setBrush(QPalette::Background,QColor(Qt::blue));
    palette.setBrush(QPalette::Background,QBrush(QPixmap("2.jpg")));
    this->setPalette(palette);

    this->islogin = false;
}

void loginDlg::loginBtnOnclick()
{
    //QMessageBox::information(this,"info","loginBtnOnclick success!!!");
    this->userid = lineEditUserID->text();
    this->passwd = lineEditPasswd->text();
    this->dbname = lineEditDBName->text();
    this->hostip = lineEditHostIP->text();
    this->islogin = true;
    this->close();
}

void loginDlg::logoutBtnOnclick()
{
    //QMessageBox::information(this,"info","logoutBtnOnclick success!!!");
    this->islogin = false;
    this->close();
}
