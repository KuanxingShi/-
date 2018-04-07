#ifndef CHECKDLG_H
#define CHECKDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDateEdit>
#include <QComboBox>

class check_booking_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit check_booking_dlg(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QComboBox *check_type;
    QLabel *kind_label,*namelabel;
    QLineEdit *name;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;
};

class check_route_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit check_route_dlg(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QComboBox *check_type;
    QLabel *namelabel;
    QLineEdit *name;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;
};

class check_hotelnum_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit check_hotelnum_dlg(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *locationlabel;
    QLineEdit *location;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;
};

class check_carnum_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit check_carnum_dlg(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *locationlabel;
    QLineEdit *location;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;
};

class search_route_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit search_route_dlg(QWidget *parent = 0);

signals:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *fromcitylabel,*arivcitylabel;
    QLineEdit *location1,*location2;
    QDateEdit *createdate;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;
};
#endif // CHECKDLG_H
