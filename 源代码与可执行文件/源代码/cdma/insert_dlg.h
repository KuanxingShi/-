#ifndef INSERT_DLG_H
#define INSERT_DLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDateEdit>

class insert_dlg_cars : public QDialog
{
    Q_OBJECT
public:
    explicit insert_dlg_cars(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *typelabel, *locationlabel, *pricelabel,
        *numlabel;
    QLineEdit *type, *location, *price,
        *num;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};

class insert_dlg_customers : public QDialog
{
    Q_OBJECT
public:
    explicit insert_dlg_customers(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *custNamelabel;
    QLineEdit *name;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};

class insert_dlg_flights : public QDialog
{
    Q_OBJECT
public:
    explicit insert_dlg_flights(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *flightNumlabel,*pricelabel,*numSeatslabel,*numAvaillabel,*FromCitylabel,*ArivCitylabel;
    QLineEdit *flightNum,*price,*numSeats,*numAvail,*FromCity,*ArivCity;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};

class insert_dlg_hotels : public QDialog
{
    Q_OBJECT
public:
    explicit insert_dlg_hotels(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *namelabel,*locationlabel,*pricelabel,*numRoomslabel,*numAvaillabel;
    QLineEdit *name,*location,*price,*numRooms,*numAvail;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};

class insert_dlg_reservations : public QDialog
{
    Q_OBJECT
public:
    explicit insert_dlg_reservations(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *custNamelabel,*resvTypelabel,*resvKeylabel,*TypeKeylabel;
    QLineEdit *custName,*resvType,*resvKey,*TypeKey;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};
#endif // INSERT_DLG_H
