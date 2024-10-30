#include "addbox.h"
#include "ui_addbox.h"

addBox::addBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&addBox::getVal);
}

addBox::~addBox()
{
    delete ui;
}

void addBox::getVal()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString phonenumber = ui->lineEdit_3->text();
    QString address = ui->lineEdit_4->text();
    QString accountnumber = ui->lineEdit_5->text();

    emit enterInfo(username,password,phonenumber,address,accountnumber);
}

