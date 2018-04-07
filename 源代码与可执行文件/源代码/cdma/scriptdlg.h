#ifndef SCRIPTDLG_H
#define SCRIPTDLG_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>

class scriptDlg : public QDialog
{
    Q_OBJECT
public:
    explicit scriptDlg(QWidget *parent = 0);

signals:

public slots:
    void okBtnOnclick();
    void cancelBtnOnclick();
private:
    QLabel *label0;
    QTextEdit *textEditSQL;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

public:
    QString SQL;
    bool islogin;

};

#endif // SCRIPTDLG_H
