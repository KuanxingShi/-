#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QCloseEvent>
#include <QMdiArea>
#include "mymysql.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void closeEvent(QCloseEvent *event);

private:
    void createMenus();
    void createActions();
    void showsub();
    void showview(QStandardItemModel *model);

private:
    mymysql db;

    QMenu *adminMenu;
    QMenu *dataMenu;
    QMenu *searchMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QMenu *add_menus;
    QMenu *booking_menus;

    QAction *loginAction;
    QAction *logoutAction;
    QAction *exitAction;

    QAction *check_booking_information;
    QAction *check_travel_route;
    QAction *check_hotel_remainnum;
    QAction *search_route;
    QAction *check_car_remainnum;

    QAction *addItems;
    QAction *scriptAction;
    QAction *addmscAction;

    QAction *addItems_cars;
    QAction *addItems_customers;
    QAction *addItems_flights;
    QAction *addItems_hotels;
    QAction *addItems_reservations;

    QAction *booking;

    QAction *tileAction;
    QAction *cascadeAction;

    QAction *helpAction;
    QAction *aboutAction;

    QMdiArea *mdiArea;

private slots:
    void on_login();
    void on_logout();
    void on_exit();
    void on_add_items_cars();
    void on_add_items_customers();
    void on_add_items_flights();
    void on_add_items_hotels();
    void on_add_items_reservations();

    void on_check_booking();
    void on_check_route();
    void on_check_hotel();
    void on_search_route();
    void on_check_carnum();

    void on_select_msc();
    void on_script();
    void script_msg(const char *SQL);

    void tileSubWindow();
    void cascadeSubWindow();

    void on_booking();

    void on_help();
    void on_about();
};



#endif // MAINWINDOW_H
