#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QString>

class loginDlg : public QDialog
{
    Q_OBJECT
public:
    explicit loginDlg(QWidget *parent = 0);

signals:

public slots:
    void loginBtnOnclick();
    void logoutBtnOnclick();

private:
    QLabel *label0;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

    QLineEdit *lineEditUserID;
    QLineEdit *lineEditPasswd;
    QLineEdit *lineEditDBName;
    QLineEdit *lineEditHostIP;

    QPushButton *loginBtn;
    QPushButton *logoutBtn;

public:
    QString userid;
    QString passwd;
    QString dbname;
    QString hostip;
    bool islogin;
};



#endif // LOGINDLG_H
