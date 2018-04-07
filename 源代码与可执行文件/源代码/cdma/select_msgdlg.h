#ifndef SELECT_MSGDLG_H
#define SELECT_MSGDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDateEdit>

class select_msgDlg : public QDialog
{
    Q_OBJECT
public:
    explicit select_msgDlg(QWidget *parent = 0);

signals:

public slots:

private slots:
    void okBtnOnclick();
    void cancelBtnOnclick();

private:
    QLabel *mscidlabel;
    QLineEdit *mscid;
    QPushButton *okBtn, *cancelBtn;

public:
    QString SQL;
    bool isok;

};

#endif // SELECT_MSGDLG_H
