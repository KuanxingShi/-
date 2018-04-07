#include "scriptdlg.h"
#include <QGridLayout>
#include <QHBoxLayout>

scriptDlg::scriptDlg(QWidget *parent) :
    QDialog(parent)
{
    label0 = new QLabel(tr("请输入SQL"));
    textEditSQL = new QTextEdit();
    okBtn = new QPushButton(tr("执行"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *layout1 = new QGridLayout(this);
    layout1->addWidget(label0,0,0);
    layout1->addWidget(textEditSQL,0,1);

    QHBoxLayout *layout2 = new QHBoxLayout();
    layout2->addWidget(okBtn);
    layout2->addWidget(cancelBtn);

    layout1->addLayout(layout2,1,1);

    connect(okBtn,SIGNAL(clicked()),this,SLOT(okBtnOnclick()));
    connect(cancelBtn,SIGNAL(clicked()),this,SLOT(cancelBtnOnclick()));

    islogin = false;
}


void scriptDlg::okBtnOnclick()
{
    this->SQL = textEditSQL->toPlainText();//TextEdit没有text函数，得到textedit当中的用户输入的内容的函数是toPlainText（）函数。

    islogin = true;

    this->close();
}

void scriptDlg::cancelBtnOnclick()
{
    islogin = false;
    this->close();
}
