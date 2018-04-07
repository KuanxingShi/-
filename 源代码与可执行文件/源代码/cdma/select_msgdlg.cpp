#include "select_msgdlg.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QMessageBox>

select_msgDlg::select_msgDlg(QWidget *parent) :
    QDialog(parent)
{
    mscidlabel = new QLabel(tr("请输入MSCID"));
    mscid = new QLineEdit();

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(mscidlabel, 0, 0);
    glayout->addWidget(mscid, 0, 1);

    QHBoxLayout *hlayout = new QHBoxLayout();
    hlayout->addWidget(okBtn);
    hlayout->addWidget(cancelBtn);

    glayout->addLayout(hlayout, 1, 1);

    glayout->setColumnStretch(0,1);
    glayout->setColumnStretch(1,3);

    glayout->setMargin(15);
    glayout->setSpacing(10);

    connect(okBtn, SIGNAL(clicked()), this, SLOT(okBtnOnclick()));
    connect(cancelBtn, SIGNAL(clicked()), this, SLOT(cancelBtnOnclick()));

    isok = false;
    this->setWindowIcon(QIcon("main.png"));
    this->setWindowTitle(tr("查询MSC"));
    mscid->setFocus();
}

void select_msgDlg::okBtnOnclick()
{
    if (mscid->text().trimmed().isEmpty())
    {
        this->SQL = "select * from mscs";
    }else
    {
        this->SQL = QString("select * from mscs where mscid=%1").arg(mscid->text());
    }

    this->isok = true;
    this->close();
}

void select_msgDlg::cancelBtnOnclick()
{
    this->close();
}
