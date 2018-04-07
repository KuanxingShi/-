#ifndef BOOKINGDLG_H
#define BOOKINGDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDateEdit>
#include <QComboBox>

class booking_dlg : public QDialog
{
    Q_OBJECT
public:
    explicit booking_dlg(QWidget *parent = 0);

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


#endif // BOOKINGDLG_H
