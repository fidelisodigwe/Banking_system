#include "updatebox.h"
#include "ui_updatebox.h"

updateBox::updateBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::updateBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&updateBox::updateAccInfo);
}

updateBox::~updateBox()
{
    delete ui;
}

void updateBox::updateAccInfo()
{
    QString accountNumber = ui->lineEdit_5->text();
    QString userName = ui->lineEdit->text();
    QString userpassword = ui->lineEdit_2->text();
    QString phonenumber = ui->lineEdit_3->text();
    QString address = ui->lineEdit_4->text();

    emit onUpdate(accountNumber,userName,userpassword,phonenumber,address);
}

