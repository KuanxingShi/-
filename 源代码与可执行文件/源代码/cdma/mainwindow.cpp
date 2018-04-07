#include "mainwindow.h"
#include <QMessageBox>
#include <QIcon>
#include <QMdiSubWindow>
#include <QStandardItemModel>
#include <QTableView>
#include "logindlg.h"
#include "scriptdlg.h"
#include "insert_dlg.h"
#include "select_msgdlg.h"
#include "bookingdlg.h"
#include "checkdlg.h"

//程序的健壮性：一个程序，你不能指望用你程序的人循规蹈矩，他是乱用的，所以程序需要有健壮性

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle(tr("旅程管理系统"));//设置窗口的标题
    this->setWindowIcon(QIcon("main.png"));//设置窗口光标

    mdiArea = new QMdiArea(); //管理多文档程序中的一些子窗口
    this->setCentralWidget(mdiArea);//将控件放置中央

    //设置主窗口的背景图片
    mdiArea->setBackground(Qt::NoBrush);
    //mdiArea->setStyleSheet("background-image:url(1.jpg)");//原图像平铺到背景里
    mdiArea->setStyleSheet("border-image:url(1.jpg)");//原图像会拉伸与背景框一样的大小
    //设置水平和垂直滚动条
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    createActions();
    createMenus();

}

MainWindow::~MainWindow()
{

}

void MainWindow::createMenus()
{
    QMenuBar *menuBar = this->menuBar();

    adminMenu = menuBar->addMenu(tr("开始"));
    adminMenu->addAction(loginAction);
    adminMenu->addAction(logoutAction);
    adminMenu->addSeparator();
    adminMenu->addAction(exitAction);

    dataMenu = menuBar->addMenu(tr("管理"));
    dataMenu->addAction(addItems_cars);
    dataMenu->addAction(addItems_customers);
    dataMenu->addAction(addItems_flights);
    dataMenu->addAction(addItems_hotels);
    dataMenu->addAction(addItems_reservations);
    dataMenu->addSeparator();
    searchMenu = menuBar->addMenu(tr("查询"));
    searchMenu->addAction(check_booking_information);
    searchMenu->addAction(check_travel_route);
    searchMenu->addAction(check_car_remainnum);
    searchMenu->addAction(search_route);
    searchMenu->addAction(check_hotel_remainnum);
    searchMenu->addSeparator();
    searchMenu->addAction(scriptAction);


    booking_menus = menuBar->addMenu((tr("预订")));
    booking_menus->addAction(booking);

    windowMenu = menuBar->addMenu(tr("窗口"));
    windowMenu->addAction(cascadeAction);
    windowMenu->addAction(tileAction);

    helpMenu = menuBar->addMenu(tr("帮助"));
    helpMenu->addAction(helpAction);
    helpMenu->addSeparator();
    helpMenu->addAction(aboutAction);
}

void MainWindow::createActions()
{
    loginAction = new QAction(tr("登录"),this);
    loginAction->setShortcut(tr("Ctrl+U"));
    connect(loginAction, SIGNAL(triggered()), this, SLOT(on_login()));

    logoutAction = new QAction(tr("注销"),this);
    logoutAction->setShortcut(tr("Ctrl+B"));
    connect(logoutAction, SIGNAL(triggered()), this, SLOT(on_logout()));

    exitAction = new QAction(tr("退出"),this);
    exitAction->setShortcut(tr("Ctrl+W"));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(on_exit()));

    addItems_cars = new QAction(tr("添加车辆信息"),this);
    addItems_cars->setEnabled(false);//设置执行脚本这个行为为不可用
    connect(addItems_cars, SIGNAL(triggered()), this, SLOT(on_add_items_cars()));


    addItems_customers = new QAction(tr("添加顾客信息"),this);
    addItems_customers->setEnabled(false);
    connect(addItems_customers, SIGNAL(triggered()), this, SLOT(on_add_items_customers()));

    addItems_flights = new QAction(tr("添加航班信息"),this);
    addItems_flights->setEnabled(false);
    connect(addItems_flights, SIGNAL(triggered()), this, SLOT(on_add_items_flights()));

    addItems_hotels = new QAction(tr("添加宾馆信息"),this);
    addItems_hotels->setEnabled(false);
    connect(addItems_hotels, SIGNAL(triggered()), this, SLOT(on_add_items_hotels()));

    addItems_reservations = new QAction(tr("添加旅程信息"),this);
    addItems_reservations->setEnabled(false);
    connect(addItems_reservations, SIGNAL(triggered()), this, SLOT(on_add_items_reservations()));

    check_booking_information = new QAction(tr("查询预订信息"),this);
    check_booking_information->setEnabled(false);
    connect(check_booking_information, SIGNAL(triggered()), this, SLOT(on_check_booking()));

    check_travel_route = new QAction(tr("查询旅行路线"),this);
    check_travel_route->setEnabled(false);
    connect(check_travel_route, SIGNAL(triggered()), this, SLOT(on_check_route()));

    check_car_remainnum = new QAction(tr("查询汽车量"),this);
    check_car_remainnum->setEnabled(false);
    connect(check_car_remainnum, SIGNAL(triggered()), this, SLOT(on_check_carnum()));

    search_route = new QAction(tr("查询路线"),this);
    search_route->setEnabled(false);
    connect(search_route, SIGNAL(triggered()), this, SLOT(on_search_route()));

    check_hotel_remainnum = new QAction(tr("查询宾馆剩余数量"),this);
    check_hotel_remainnum->setEnabled(false);
    connect(check_hotel_remainnum, SIGNAL(triggered()), this, SLOT(on_check_hotel()));

    scriptAction = new QAction(tr("执行脚本"),this);
    scriptAction->setShortcut(tr("Ctrl+P"));
    scriptAction->setEnabled(false);//设置执行脚本这个行为为不可用
    connect(scriptAction, SIGNAL(triggered()), this, SLOT(on_script()));

    booking = new QAction(tr("预订"),this);
    booking ->setEnabled(false);
    connect(booking, SIGNAL(triggered()),this, SLOT(on_booking()));

    tileAction = new QAction(tr("并列窗口"),this);
    tileAction->setShortcut(tr("Ctrl+R"));
    connect(tileAction, SIGNAL(triggered()), this, SLOT(tileSubWindow()));

    cascadeAction = new QAction(tr("层叠窗口"),this);
    cascadeAction->setShortcut(tr("Ctrl+Q"));
    connect(cascadeAction, SIGNAL(triggered()), this, SLOT(cascadeSubWindow()));

    helpAction = new QAction(tr("帮助"),this);
    helpAction->setShortcut(tr("Ctrl+S"));
    connect(helpAction, SIGNAL(triggered()), this, SLOT(on_help()));

    aboutAction = new QAction(tr("关于"),this);
    aboutAction->setShortcut(tr("Ctrl+T"));
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(on_about()));
}

void MainWindow::showsub()
{
    QWidget *wl = new QWidget();
    wl->setAttribute(Qt::WA_DeleteOnClose);//设置widget在close的时候自动delete
    wl->setWindowIcon(windowIcon());//设置图标
    mdiArea->addSubWindow(wl);

    //设置子窗口的属性
    wl->setWindowTitle(tr("SQL"));//设置widget标题
    wl->setStyleSheet("border-image:url(3.jpg);");//设置widget的背景图片
    wl->show();
    mdiArea->activeSubWindow()->resize(this->width() - 100,this->height() - 100);//设置widget窗口的大小

}

void MainWindow::showview(QStandardItemModel *model)
{
    QTableView *view1 = new QTableView();
    view1->setAttribute(Qt::WA_DeleteOnClose);
    view1->setWindowIcon(this->windowIcon());
    view1->setWindowTitle(tr("SQL"));
    view1->setStyleSheet("border-image:url(3.jpg);");
    mdiArea->addSubWindow(view1);
    //view继承自widget，如果没有module，那么view不会显示任何数据
    view1->setModel(model);
    view1->show();
    mdiArea->activeSubWindow()->resize(this->width() - 200, this->height() - 200);//设置活动窗口的大小，故要在show（）函数的后面
}

void MainWindow::on_add_items_cars()
{
    insert_dlg_cars dlg;
    dlg.exec();

    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
         this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_add_items_customers()
{
    insert_dlg_customers dlg;
    dlg.exec();

    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
         this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_add_items_flights()
{
    insert_dlg_flights dlg;
    dlg.exec();

    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
         this->script_msg(dlg.SQL.toStdString().data());
    }

}

void MainWindow::on_add_items_hotels()
{
    insert_dlg_hotels dlg;
    dlg.exec();


    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
        this->script_msg(dlg.SQL.toStdString().data());
    }

}

void MainWindow::on_add_items_reservations()
{
    insert_dlg_reservations dlg;
    dlg.exec();

    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
         this->script_msg(dlg.SQL.toStdString().data());
    }

}

void MainWindow::on_login()
{

    loginDlg dlg;
    dlg.exec();//调用exec产生一个模式对话框，程序在函数exec这个地方阻塞了，一个阻塞了，韩素华就停在了此处


    //如何在这里知道用户名、密码、IP等用户输入的信息呢？
    if (dlg.islogin)//代表用户点击了dlg对话框的登录按钮
    {
        /*
            QString userid;
            QString passwd;
            QString name;
            QString hostip;
        */
        //mymysql db;//放在类中，不需要每次都进行连接
        int res = db.sql_connect(dlg.hostip.toStdString().data(), dlg.userid.toStdString().data(), dlg.passwd.toStdString().data(), dlg.dbname.toStdString().data());
        if (res == -1)
        {
            QMessageBox::information(this, "登录失败", db.geterror());
        }else
        {
            QMessageBox::information(this, "", "登录成功");
            scriptAction->setEnabled(true);
            //addmscAction->setEnabled(true);
            addItems_cars->setEnabled(true);
            addItems_customers->setEnabled(true);
            addItems_flights->setEnabled(true);
            addItems_hotels->setEnabled(true);
            addItems_reservations->setEnabled(true);
            booking->setEnabled(true);
            check_booking_information->setEnabled(true);
            check_travel_route->setEnabled(true);
            check_hotel_remainnum->setEnabled(true);
            check_car_remainnum->setEnabled(true);
            search_route->setEnabled(true);
        }
        /*
        if ((dlg.userid == "abc") && (dlg.passwd == "123456"))
        {
            QMessageBox::information(this,"","登录成功");
        }else
        {
            QMessageBox::information(this,"","登录失败");
        }
        */
    }

}

void MainWindow::on_logout()
{
    //QMessageBox::information(this,"info","logout success!!!");

    QMessageBox::StandardButton button = QMessageBox::question(this, tr("提示"), tr("是否注销 ？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

    if (button == QMessageBox::Yes)
    {
        db.sql_disconnect();
        scriptAction->setEnabled(false);
        addmscAction->setEnabled(false);
        addItems_cars->setEnabled(false);
        addItems_customers->setEnabled(false);
        addItems_flights->setEnabled(false);
        addItems_hotels->setEnabled(false);
        addItems_reservations->setEnabled(false);
    }
}

void MainWindow::on_exit()
{
    //QMessageBox::information(this,"info","exit success!!!");
    this->close();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //通过question函数的返回值来判断用户到底点击的是yes还是no
    QMessageBox::StandardButton button = QMessageBox::question(this, tr("提示"), tr("是否退出程序？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::No);

    if (button == QMessageBox::Yes)
    {
        event->accept();//接收退出
    }else
    {
        event->ignore();//不接受退出
    }
}

void MainWindow::on_select_msc()
{
    select_msgDlg dlg;
    dlg.exec();

    if (dlg.isok == true)
    {
        //QMessageBox::information(this, "SQL", dlg.SQL);
         this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_script()
{
    //QMessageBox::information(this,"info","on_script success!!!");
    //showsub();
    //showview();
    scriptDlg dlg;
    dlg.exec();//调用exec产生一个模式对话框，程序在函数exec这个地方阻塞了，一个阻塞函数就停在了此处

    if (dlg.islogin == true)
    {
         this->script_msg(dlg.SQL.toStdString().data());
    }
}
void MainWindow::on_check_booking()
{
    check_booking_dlg dlg;
    dlg.exec();

    if(dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_check_route()
{
    check_route_dlg dlg;
    dlg.exec();

    if(dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_check_carnum()
{
    check_carnum_dlg dlg;
    dlg.exec();

    if(dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_search_route()
{
    search_route_dlg dlg;
    dlg.exec();

    if(dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_check_hotel()
{
    check_hotelnum_dlg dlg;
    dlg.exec();

    if(dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::script_msg(const char *SQL) //处理sql语句返回后的数据
{
    QStandardItemModel *model = NULL;
    int res = 0;
    if ((strncmp(SQL, "select", 6) == 0) || (strncmp(SQL, "SELECT", 6) == 0)
            || (strncmp(SQL, "show", 4) == 0) || (strncmp(SQL, "SHOW", 4) == 0)
            || (strncmp(SQL, "desc", 4) == 0) || (strncmp(SQL, "DESC", 4) == 0))
    {
        res = db.sql_open(SQL, &model);
        if (res != -1)
        {
            this->showview(model);
        }
    }else
    {
        res = db.sql_exec(SQL);
    }

    if (res == -1)
    {
        QMessageBox::information(this, "执行失败", db.geterror());
    }else
    {
        QMessageBox::information(this, "提示", "执行成功");
    }

}

void MainWindow::tileSubWindow()
{
    //QMessageBox::information(this,"info","on_tile success!!!");
    mdiArea->tileSubWindows();
}

void MainWindow::cascadeSubWindow()
{
    //QMessageBox::information(this,"info","on_cascade success!!!");
    mdiArea->cascadeSubWindows();
}

void MainWindow::on_booking()
{
    booking_dlg dlg;
    dlg.exec();
    //char *result = (char*)malloc(10*sizeof(char));
    //int a;

    if (dlg.isok == true)
    {
        this->script_msg(dlg.SQL.toStdString().data());
    }
}

void MainWindow::on_help()
{
    QMessageBox::information(this,"help","请百度相关问题，自行解决！！！");
}

void MainWindow::on_about()
{
    QMessageBox::about(this,tr("关于旅游管理系统"),tr("版权所有，盗版剁手！！！"));

}
