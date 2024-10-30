#include "findbox.h"
#include "ui_findbox.h"

findBox::findBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::findBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&findBox::searchAcc);
}

findBox::~findBox()
{
    delete ui;
}

void findBox::searchAcc()
{
    QString accountnumber = ui->lineEdit->text();
    emit onSearch(accountnumber);
}

