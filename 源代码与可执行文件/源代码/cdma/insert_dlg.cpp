#include "insert_dlg.h"
#include <QGridLayout>
#include <QHBoxLayout>
#include <QMessageBox>

//添加汽车信息
insert_dlg_cars::insert_dlg_cars(QWidget *parent) :
    QDialog(parent)
{
    typelabel = new QLabel(tr("请输入type"));
    locationlabel = new QLabel(tr("请输入location"));
    pricelabel = new QLabel(tr("请输入price"));
    numlabel = new QLabel(tr("请输入汽车数量"));

    type = new QLineEdit("途观K");
    location = new QLineEdit("changsha");
    price = new QLineEdit("50");
    num = new QLineEdit("20");

    okBtn = new QPushButton(tr("添加"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(typelabel, 0, 0);
    glayout->addWidget(type, 0, 1);

    glayout->addWidget(locationlabel, 1, 0);
    glayout->addWidget(location, 1, 1);

    glayout->addWidget(pricelabel, 2, 0);
    glayout->addWidget(price, 2, 1);

    glayout->addWidget(numlabel, 3, 0);
    glayout->addWidget(num, 3, 1);


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
    this->setWindowTitle(tr("添加汽车信息"));
    type->setFocus();
}

#define INSERTMSC "insert into cars(type, location, price, numCars, numAvail) \
    values('%1', '%2', %3, %4, %5)"

void insert_dlg_cars::okBtnOnclick()
{
    if (type->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("汽车型号不能为空"));
        type->setFocus();
        return;
    }

    if (location->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("所在地不能为空"));
        location->setFocus();
        return;
    }
    if (price->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("价格不能为空"));
        price->setFocus();
        return;
    }
    if (num->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("数量不能为空"));
        num->setFocus();
        return;
    }

    SQL = QString(INSERTMSC)
               .arg(type->text())
               .arg(location->text())
               .arg(price->text())
               .arg(num->text())
               .arg(num->text());
    this->isok = true;
    this->close();
}

void insert_dlg_cars::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//添加顾客信息
insert_dlg_customers::insert_dlg_customers(QWidget *parent) :
    QDialog(parent)
{
    custNamelabel = new QLabel(tr("请输入顾客姓名"));

    name = new QLineEdit();

    okBtn = new QPushButton(tr("添加"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(custNamelabel, 0, 0);
    glayout->addWidget(name, 0, 1);

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
    this->setWindowTitle(tr("添加顾客信息"));
    name->setFocus();
}

#define INSERTMSC "insert into customers(custName) \
    values('%1')"

void insert_dlg_customers::okBtnOnclick()
{
    if (name->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("顾客姓名不能为空"));
        name->setFocus();
        return;
    }

    SQL = QString(INSERTMSC)
               .arg(name->text());
    this->isok = true;
    this->close();
}

void insert_dlg_customers::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//添加航班信息
insert_dlg_flights::insert_dlg_flights(QWidget *parent) :
    QDialog(parent)
{
    flightNumlabel = new QLabel(tr("请输入航班编号"));
    pricelabel = new QLabel(tr("请输入价格"));
    numSeatslabel = new QLabel(tr("请输入总座位数"));
    numAvaillabel = new QLabel(tr("请输入剩余座位数"));
    FromCitylabel = new QLabel(tr("请输入出发城市"));
    ArivCitylabel = new QLabel(tr("请输入到达城市"));

    flightNum = new QLineEdit();
    price = new QLineEdit();
    numSeats = new QLineEdit();
    numAvail = new QLineEdit();
    FromCity = new QLineEdit();
    ArivCity = new QLineEdit();

    okBtn = new QPushButton(tr("添加"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(flightNumlabel, 0, 0);
    glayout->addWidget(flightNum, 0, 1);

    glayout->addWidget(pricelabel, 1, 0);
    glayout->addWidget(price, 1, 1);

    glayout->addWidget(numSeatslabel, 2, 0);
    glayout->addWidget(numSeats, 2, 1);

    glayout->addWidget(numAvaillabel, 3, 0);
    glayout->addWidget(numAvail, 3, 1);

    glayout->addWidget(FromCitylabel, 4, 0);
    glayout->addWidget(FromCity, 4, 1);

    glayout->addWidget(ArivCitylabel, 5, 0);
    glayout->addWidget(ArivCity, 5, 1);

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
    this->setWindowTitle(tr("添加航班信息"));
    flightNum->setFocus();
}

#define INSERTMSC "insert into flights(flightNum, price, numSeats, numAvail, FromCity, ArivCity) \
    values('%1', %2, %3, %4, '%5', '%6')"

void insert_dlg_flights::okBtnOnclick()
{
    if (flightNum->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("航班号不能为空"));
        flightNum->setFocus();
        return;
    }
    if (price->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("价格不能为空"));
        price->setFocus();
        return;
    }
    if (numSeats->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("座位数不能为空"));
        numSeats->setFocus();
        return;
    }
    if (numAvail->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("剩余座位数不能为空"));
        numAvail->setFocus();
        return;
    }
    if (FromCity->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("出发城市不能为空"));
        FromCity->setFocus();
        return;
    }
    if (ArivCity->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("到达城市不能为空"));
        ArivCity->setFocus();
        return;
    }

    SQL = QString(INSERTMSC)
               .arg(flightNum->text())
               .arg(price->text())
               .arg(numSeats->text())
               .arg(numAvail->text())
               .arg(FromCity->text())
               .arg(ArivCity->text());
    this->isok = true;
    this->close();
}

void insert_dlg_flights::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//添加旅馆信息
insert_dlg_hotels::insert_dlg_hotels(QWidget *parent) :
    QDialog(parent)
{
    namelabel = new QLabel(tr("请输入旅馆名称"));
    locationlabel = new QLabel(tr("请输入所在城市"));
    pricelabel = new QLabel(tr("请输入价格"));
    numRoomslabel = new QLabel(tr("请输入房间数"));
    numAvaillabel = new QLabel(tr("请输入剩余房间数"));

    name = new QLineEdit();
    location = new QLineEdit();
    price = new QLineEdit();
    numRooms = new QLineEdit();
    numAvail = new QLineEdit();

    okBtn = new QPushButton(tr("添加"));
    cancelBtn = new QPushButton(tr("取消"));

    QGridLayout *glayout = new QGridLayout(this);
    glayout->addWidget(namelabel, 0, 0);
    glayout->addWidget(name, 0, 1);

    glayout->addWidget(locationlabel, 1, 0);
    glayout->addWidget(location, 1, 1);

    glayout->addWidget(pricelabel, 2, 0);
    glayout->addWidget(price, 2, 1);

    glayout->addWidget(numRoomslabel, 3, 0);
    glayout->addWidget(numRooms, 3, 1);

    glayout->addWidget(numAvaillabel, 4, 0);
    glayout->addWidget(numAvail, 4, 1);

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
    this->setWindowTitle(tr("添加旅馆信息"));
    name->setFocus();
}

#define INSERTMSC "insert into hotels(name, location, price, numRooms, numAvail) \
    values('%1', '%2', %3, %4, %5)"

void insert_dlg_hotels::okBtnOnclick()
{
    if (name->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("旅馆名称不能为空"));
        name->setFocus();
        return;
    }
    if (location->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("所在城市不能为空"));
        location->setFocus();
        return;
    }
    if (price->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("价格不能为空"));
        price->setFocus();
        return;
    }
    if (numRooms->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("房间数不能为空"));
        numRooms->setFocus();
        return;
    }
    if (numAvail->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("剩余房间数不能为空"));
        numAvail->setFocus();
        return;
    }

    SQL = QString(INSERTMSC)
               .arg(name->text())
               .arg(location->text())
               .arg(price->text())
               .arg(numRooms->text())
               .arg(numAvail->text());
    this->isok = true;
    this->close();
}

void insert_dlg_hotels::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}

//添加旅程
insert_dlg_reservations::insert_dlg_reservations(QWidget *parent) :
    QDialog(parent)
{
    custNamelabel = new QLabel(tr("请输入旅客姓名"));
    resvTypelabel = new QLabel(tr("请输入交通方式"));
    resvKeylabel = new QLabel(tr("请输入resvKey"));
    TypeKeylabel = new QLabel(tr("请输入交通工具型号"));

    custName = new QLineEdit();
    resvType = new QLineEdit();
    resvKey = new QLineEdit();
    TypeKey = new QLineEdit();

    okBtn = new QPushButton(tr("添加"));
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
    this->setWindowTitle(tr("添加旅程"));
    custName->setFocus();
}

#define INSERTMSC "insert into reservations(custName, resvType, resvKey, TypeKey) \
    values('%1', '%2', %3, '%4')"

void insert_dlg_reservations::okBtnOnclick()
{
    if (custName->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("旅客姓名不能为空"));
        custName->setFocus();
        return;
    }
    if (resvType->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("交通方式不能为空"));
        resvType->setFocus();
        return;
    }
    if (resvKey->text().trimmed().isEmpty())
    {
        QMessageBox::information(this, tr("错误"), tr("resvKey不能为空"));
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

void insert_dlg_reservations::cancelBtnOnclick()
{
    this->isok = false;
    this->close();
}
