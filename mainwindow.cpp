#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStringList>
#include <QMessageBox>
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,addbox(new addBox(this))
    ,findbox(new findBox(this))
    ,updatebox(new updateBox(this))
    ,finddelbox(new finddelBox(this))
{
    ui->setupUi(this);
    connect(ui->btnAdminAddUser,&QPushButton::clicked,this,&MainWindow::adminAddUserFun);
    connect(addbox,&addBox::enterInfo,this,&MainWindow::getInfo);
    connect(ui->adminpgsearchbtn,&QPushButton::clicked,this,&MainWindow::searchFun);
    connect(findbox,&findBox::onSearch,this,&MainWindow::onFind);
    connect(ui->btnAdminchUserdata,&QPushButton::clicked,this,&MainWindow::chUserDataFun);
    connect(updatebox,&updateBox::onUpdate,this,&MainWindow::onUpdateAccInfo);
    connect(ui->btnAdminDeleteUser,&QPushButton::clicked,this,&MainWindow::searchDelFun);
    connect(finddelbox,&finddelBox::onSearchDel,this,&MainWindow::onFindDel);

    QFile CSVFile(QCoreApplication::applicationDirPath()+"/DB.csv");
    if(CSVFile.open(QIODevice::ReadWrite))
    {

        QTextStream Stream(&CSVFile);
        while (Stream.atEnd() == false)
        {

            QString LineData = Stream.readLine();
            qDebug() << LineData;

        }
    }
    CSVFile.close();


    if(CSVFile.open(QIODevice::ReadWrite |QIODevice::Append))
    {


        {
            QTextStream Stream(&CSVFile);
            for(int i =0; i < 10; i++)
            {
                Stream <<"Column 1=  " + QString::number(i + 1)+ ",column2 = " + QString::number((i + 1));
            }


        }
    }
    CSVFile.close();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete addbox;
    delete findbox;
    delete updatebox;
    delete finddelbox;

}

QStringList usernameList;
QStringList passwordList;
QStringList phoneNumberList;
QStringList AddressList;
QStringList AcccountNumberList;
bool found = false;

void MainWindow::on_btnAdmin_clicked()
{
    QString password = "imtschool";
    QString name = "fidelis";
    if((ui->leAdminPassword->text() == "imtschool") && (ui->leAdminName->text() == "fidelis"))
    {
        ui->FidelBanksApp2->setCurrentIndex(1);
        ui->leAdNameAdminpg->setText(ui->leAdminName->text());
    }else
    {

        QMessageBox msgBox;
        msgBox.setText("The Username or Password is incorrect.");
        msgBox.exec();

    }

}


void MainWindow::on_btnUser_clicked()
{
    QString password = "imtschool";
    QString name = "fidelis";
    if((ui->leUserpassword->text() == "imtschool") && (ui->leUserName->text() == "fidelis"))
    {
        ui->FidelBanksApp2->setCurrentIndex(2);
        ui->leuserNameusrpg->setText(ui->leUserName->text());

    }else
    {

        QMessageBox msgBox;
        msgBox.setText("The Username or Password is incorrect.");
        msgBox.exec();

    }

}


void MainWindow::on_btnAdminlogout_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(0);
}


void MainWindow::on_btnUserLogout_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(0);
}

void MainWindow::on_btnAdminWithdraw_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(4);
    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);
    QMessageBox::information(this,"Success", "currentBal:"+currentBal);
}


void MainWindow::on_okWithdrawBtn_clicked()
{
    QString uAmount = ui->lineEdit_14->text();

    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);

    int balance = 500;
    int Amount;


    Amount = uAmount.toInt();

    if(balance >= Amount ){
        balance -= Amount;
        QString balance_str = QString::number(balance);
        QMessageBox::information(this,"Success", "currentBal:"+currentBal+ "\n"
                                                                               "Amount"+uAmount+ "\n"
                                                                  "Remaining Balance: "+balance_str);
    }
    else{
        QMessageBox::information(this,"Error Message",
                                 "Low Balance!" ) ;
    }
}


void MainWindow::on_depositFundBtn_clicked()
{
    QString uAmount = ui->leAmountDepopg->text();

    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);

    int balance = 500;
    int Amount;


    Amount = uAmount.toInt();

    if(balance >= Amount && Amount>0 ){
        balance += Amount;
        QString balance_str = QString::number(balance);
        QMessageBox::information(this,"Success", "currentBal:"+currentBal+ "\n"
                                                                               "Amount"+uAmount+ "\n"
                                                                  "Remaining Balance: "+balance_str);
    }
    else{
        QMessageBox::information(this,"Error Message",
                                 "Negative Number !" ) ;
    }
}


void MainWindow::on_btnAdminDeposit_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(8);
    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);
    QMessageBox::information(this,"Success", "currentBal:"+currentBal);
}


void MainWindow::on_btnUserWithdraw_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(4);
    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);
    QMessageBox::information(this,"Success", "currentBal:"+currentBal);
}


void MainWindow::on_btnUserDeposit_clicked()
{
    ui->FidelBanksApp2->setCurrentIndex(8);
    int initialBalance = 500;
    QString currentBal = QString::number(initialBalance);
    QMessageBox::information(this,"Success", "currentBal:"+currentBal);
}


void MainWindow::adminAddUserFun()
{
    addbox->show();
}

void MainWindow::searchFun()
{
    findbox->show();
}
void MainWindow::getInfo(const QString &name,const QString &pw,const QString &phonenum,const QString &add,const QString &accnum){
    usernameList.append(name);
    passwordList.append(pw);
    phoneNumberList.append(phonenum);
    AddressList.append(add);
    AcccountNumberList.append(accnum);

    QMessageBox::information(this,"Success","Account Number Added Succesfully!");
}

void MainWindow::onFind(const QString &accnum){

    for(int i = 0;i< AcccountNumberList.length();i++){
        if(accnum == AcccountNumberList[i]) {
            found = true;
            QMessageBox::information(this,"Success",
                                     "Account Number: " +AcccountNumberList[i]+"\n"
                                     "Account Name: "+usernameList[i]+"\n"
                                     "User Phone Number: "+phoneNumberList[i]+"\n"
                                     "User Address: "+AddressList[i]);
            break;
        }
    }
    if(!found) {
        QMessageBox::information(this,"Error","Invalid Account Number");
    }
}



void MainWindow::chUserDataFun()
{
    updatebox->show();
}
void MainWindow::onUpdateAccInfo(const QString &accnum, const QString &name,const QString &pw,const QString &phonenum, const QString &add){
    for (int i=0;i<AcccountNumberList.length();i++){
        if(accnum==AcccountNumberList[i]){
            found=true;
            usernameList[i] = name;
            passwordList[i] = pw;
            phoneNumberList[i] = phonenum;
            AddressList[i] = add;


            QMessageBox::information(this,"Success",
              "the new user name: "+usernameList[i]+"\n"
                 " New User Phone Number: "+phoneNumberList[i]+"\n"
                "New User Address: "+AddressList[i]+"\n"
                      "User Address: "+passwordList[i]  );
            break;
        }
    }
    if(!found){
          QMessageBox::information(this,"Error","Invalid Account Number");
    }
}


void MainWindow::searchDelFun()
{
    finddelbox->show();
}
void MainWindow::onFindDel(const QString &accnum){
    for(int i =0; i<AcccountNumberList.length(); i++){
        if(accnum == AcccountNumberList[i]){
            found = true;
            AcccountNumberList[i] = 0;
            usernameList[i] = "";
            passwordList[i] = 0;
            phoneNumberList[i] = 0;
            AddressList[i] = "";

            QMessageBox::information(this,"Success","Account Number Deleted Succesfully!");
            break;
        }
    }
    if(!found){
        QMessageBox::information(this,"Error","Invalid Account Number");
    }
}

void MainWindow::on_btnchUseruserdata_clicked()
{
   updatebox->show();
}


void MainWindow::on_pushButton_2_clicked()
{
      ui->FidelBanksApp2->setCurrentIndex(2);
}


void MainWindow::on_btnExitWithdraw_clicked()
{
     ui->FidelBanksApp2->setCurrentIndex(2);
}

