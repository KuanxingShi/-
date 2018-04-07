#include "bookingdlg.h"
#include "checkdlg.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include "mymysql.h"
//check_booking_dlg
check_booking_dlg::check_booking_dlg(QWidget *parent)
{
    kind_label = new QLabel(tr("查询"));

    check_type = new QComboBox();
    check_type->addItem(QWidget::tr("客户"));
    check_type->addItem(QWidget::tr("飞机"));
    check_type->addItem(QWidget::tr("汽车"));
    check_type->addItem(QWidget::tr("宾馆"));
    namelabel = new QLabel(tr("客户姓名"));
    name = new QLineEdit("*");

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(kind_label, 0, 0);
    glayout->addWidget(check_type, 0, 1);
    glayout->addWidget(namelabel,1,0);
    glayout->addWidget(name,1,1);

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
    this->setWindowTitle(tr("查询预订信息"));
    check_type->setFocus();
}

void check_booking_dlg::okBtnOnclick()
{

    if (check_type->currentText() == tr("飞机"))
    {
         SQL = QString("SELECT * FROM reservations WHERE resvType = 'flight'");
    }
    else if(check_type->currentText() == tr("汽车"))
    {
        SQL = QString("SELECT * FROM reservations WHERE resvType = 'car'");
    }
    else if(check_type->currentText() == tr("宾馆"))
    {
        SQL = QString("SELECT * FROM reservations WHERE resvType = 'hotel'");
    }
    else if(check_type->currentText() == tr("客户"))
    {
        if(name->text().trimmed().isEmpty())
        {
            QMessageBox::information(this,tr("错误"), tr("类型不能为空"));
            name->setFocus();
            return;
        }
        SQL = QString("SELECT * FROM reservations WHERE custName = '%1'").arg(name->text());
    }

    this->isok = true;
    this->close();
}

void check_booking_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//check_route_dlg
check_route_dlg::check_route_dlg(QWidget *parent)
{

    check_type = new QComboBox();
    check_type->addItem(QWidget::tr("飞机"));
    namelabel = new QLabel(tr("客户姓名"));
    name = new QLineEdit("*");

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(check_type, 0, 3);
    glayout->addWidget(namelabel,0,0);
    glayout->addWidget(name,0,1);

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
    this->setWindowTitle(tr("查询旅客路线"));
    name->setFocus();
}

void check_route_dlg::okBtnOnclick()
{
    if (name->text().trimmed().isEmpty())
    {
        QMessageBox::information(this,"错误","客户姓名不能为空");
        name->setFocus();
        return;
    }
    if (check_type->currentText() == tr("飞机"))
    {
         SQL = QString("SELECT custName,FromCity,ArivCity FROM flights,reservations WHERE custName = '%1' and flightNum in (SELECT TypeKey FROM reservations WHERE custName = '%1' and resvType = 'flight')").arg(name->text());
    }


    this->isok = true;
    this->close();
}

void check_route_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//check_hotelnum
check_hotelnum_dlg::check_hotelnum_dlg(QWidget *parent)
{

    locationlabel = new QLabel(tr("查询的城市"));
    location = new QLineEdit();

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(locationlabel,0,0);
    glayout->addWidget(location,0,1);

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
    this->setWindowTitle(tr("查询城市剩余房间"));
    location->setFocus();
}

void check_hotelnum_dlg::okBtnOnclick()
{
    if (location->text().trimmed().isEmpty())
    {
        QMessageBox::information(this,"错误","城市不能为空");
        location->setFocus();
        return;
    }
    SQL = QString("SELECT name,numAvail FROM hotels WHERE location = '%1'").arg(location->text());

    this->isok = true;
    this->close();
}

void check_hotelnum_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//check_carnum
check_carnum_dlg::check_carnum_dlg(QWidget *parent)
{

    locationlabel = new QLabel(tr("查询的城市"));
    location = new QLineEdit();

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(locationlabel,0,0);
    glayout->addWidget(location,0,1);

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
    this->setWindowTitle(tr("查询城市剩余汽车数量"));
    location->setFocus();
}

void check_carnum_dlg::okBtnOnclick()
{
    if (location->text().trimmed().isEmpty())
    {
        QMessageBox::information(this,"错误","城市不能为空");
        location->setFocus();
        return;
    }
    SQL = QString("SELECT type,numAvail FROM cars WHERE location = '%1'").arg(location->text());

    this->isok = true;
    this->close();
}

void check_carnum_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//check_route
search_route_dlg::search_route_dlg(QWidget *parent)
{

    fromcitylabel = new QLabel(tr("出发城市"));
    arivcitylabel = new QLabel(tr("到达城市"));

    location1 = new QLineEdit();
    location2 = new QLineEdit();

    okBtn = new QPushButton(tr("查询"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(fromcitylabel,0,0);
    glayout->addWidget(location1,0,1);
    glayout->addWidget(arivcitylabel,1,0);
    glayout->addWidget(location2,1,1);

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
    this->setWindowTitle(tr("查询路线"));
    location1->setFocus();
}

void search_route_dlg::okBtnOnclick()
{
    if (location1->text().trimmed().isEmpty())
    {
        QMessageBox::information(this,"错误","出发城市不能为空");
        location1->setFocus();
        return;
    }
    if (location2->text().trimmed().isEmpty())
    {
        QMessageBox::information(this,"错误","到达城市不能为空");
        location2->setFocus();
        return;
    }

    SQL = QString("SELECT flightNum,FromCity,ArivCity FROM flights WHERE FromCity = '%1' and ArivCity = '%2'").arg(location1->text(),location2->text());

    this->isok = true;
    this->close();
}

void search_route_dlg::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}
