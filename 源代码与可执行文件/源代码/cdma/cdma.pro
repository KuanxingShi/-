#-------------------------------------------------
#
# Project created by QtCreator 2017-08-25T23:05:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#在windows下使用第三方库的方法
LIBS += -LD:\qt_PJ -llibmysql

#在linux下使用第三方库的方法
#LIBS += -lmysqlclient

TARGET = cdma
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindlg.cpp \
    scriptdlg.cpp \
    mymysql.cpp \
    select_msgdlg.cpp \
    insert_dlg.cpp \
    bookingdlg.cpp \
    checkdlg.cpp

HEADERS  += mainwindow.h \
    logindlg.h \
    scriptdlg.h \
    mymysql.h \
    select_msgdlg.h \
    insert_dlg.h \
    bookingdlg.h \
    checkdlg.h
