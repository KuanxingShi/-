#include "bookingdlg.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include "mymysql.h"
//booing_dlg
booking_dlg::booking_dlg(QWidget *parent)
{
    custNamelabel = new QLabel(tr("旅客姓名"));
    resvTypelabel = new QLabel(tr("预订类型"));
    resvKeylabel = new QLabel(tr("预订号"));
    TypeKeylabel = new QLabel(tr("型号"));

    custName = new QLineEdit("刘诗诗");
    resvType = new QLineEdit("flight");
    resvKey = new QLineEdit("55");
    TypeKey = new QLineEdit("A23");


    okBtn = new QPushButton(tr("预订"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(custNamelabel, 0, 0);
    glayout->addWidget(custName, 0, 1);

    glayout->addWidget(resvTypelabel, 1, 0);
    glayout->addWidget(resvType, 1, 1);

    glayout->addWidget(resvKeylabel, 2, 0);
    glayout->addWidget(resvKey, 2, 1);

    glayout->addWidget(TypeKeylabel, 3, 0);
    glayout->addWidget(TypeKey, 3, 1);


    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->addWidget(okBtn);
    hlayout->addWidget(cancelBtn);

    glayout->addLayout(hlayout, 6, 1);

    glayout->setColumnStretch(0,1);
    glayout->setColumnStretch(1,3);

    glayout->setMargin(15);
    glayout->setSpacing(10);

    connect(okBtn, SIGNAL(clicked()), this, SLOT(okBtnOnclick()));
    connect(cancelBtn, SIGNAL(clicked()), this, SLOT(cancelBtnOnclick()));

    isok = false;
    this->setWindowIcon(QIcon("main.png"));
    this->setWindowTitle(tr("预订"));
    custName->setFocus();
}
#define INSERTMSC "insert into reservations(custName, resvType, resvKey, TypeKey) \
    values('%1', '%2', %3, '%4')"

void booking_dlg::okBtnOnclick()
{
    if (custName->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("旅客姓名不能为空"));
        custName->setFocus();
        return;
    }
    if (resvType->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("交通工具不能为空"));
        resvType->setFocus();
        return;
    }
    if (resvKey->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("预订号不能为空"));
        resvKey->setFocus();
        return;
    }
    if (TypeKey->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("交通工具类型不能为空"));
        TypeKey->setFocus();
        return;
    }

    SQL = QString(INSERTMSC)
               .arg(custName->text())
               .arg(resvType->text())
               .arg(resvKey->text())
               .arg(TypeKey->text());

    this->isok = true;
    this->close();
}

void booking_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}
