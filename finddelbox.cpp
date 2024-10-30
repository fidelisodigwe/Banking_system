#include "finddelbox.h"
#include "ui_finddelbox.h"

finddelBox::finddelBox(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::finddelBox)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&finddelBox::searchDel);
}

finddelBox::~finddelBox()
{
    delete ui;
}

void finddelBox::searchDel()
{
    QString accountnumber = ui->lineEdit->text();
    emit onSearchDel(accountnumber);
}

