/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *FidelBanksApp2;
    QWidget *Main;
    QLabel *lblAdmin;
    QLineEdit *leAdminName;
    QLineEdit *leAdminPassword;
    QLabel *lblAdminName;
    QLabel *lblAdminPassword;
    QPushButton *btnAdmin;
    QLabel *lblUser;
    QLabel *lbluserpassword;
    QLabel *lblUserName;
    QLineEdit *leUserName;
    QLineEdit *leUserpassword;
    QPushButton *btnUser;
    QWidget *Admin;
    QPushButton *btnAdminWithdraw;
    QPushButton *btnAdminDeposit;
    QPushButton *btnAdminchUserdata;
    QPushButton *btnAdminTransfer;
    QPushButton *btnAdminAddUser;
    QPushButton *btnAdminDeleteUser;
    QPushButton *btnAdminlogout;
    QLabel *lblAdNameadminpg;
    QLineEdit *leAdNameAdminpg;
    QPushButton *adminpgsearchbtn;
    QWidget *User;
    QPushButton *btnUserWithdraw;
    QPushButton *btnUserDeposit;
    QPushButton *btnchUseruserdata;
    QPushButton *btnUserTransfer;
    QPushButton *btnUserLogout;
    QLabel *lblAccNumusrpg;
    QLabel *lblCurrenBalusrpg;
    QLabel *lbltranshistoryusrpg;
    QLabel *lblAcusrpg;
    QLabel *lblAmountusrpg;
    QLineEdit *leuserNameusrpg;
    QLineEdit *leAccnumusrpg;
    QLineEdit *leCurrentBalusrpg;
    QLineEdit *leAc1usrpg;
    QLineEdit *leamount1usrpg;
    QLineEdit *leAc2usrpg;
    QLineEdit *leAmount2usrpg;
    QLineEdit *leAc3usrpg;
    QLineEdit *leAmount3usrpg;
    QLabel *lbluserNameusrpg;
    QWidget *UserData;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QWidget *Withdraw;
    QLabel *label_17;
    QLabel *label_19;
    QLineEdit *lineEdit_14;
    QPushButton *okWithdrawBtn;
    QPushButton *btnExitWithdraw;
    QWidget *Transfer;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLabel *label_16;
    QWidget *AddNewUser;
    QLabel *label;
    QLabel *lblusernameadduserpg;
    QLabel *lbluserpasswordadduserpg;
    QLabel *lblphonenumadduserpg;
    QLabel *lbladdressadduserpg;
    QLineEdit *leuserNameadduserpg;
    QLineEdit *leuserpasswordadduserpg;
    QLineEdit *lephonenumadduserpg;
    QLineEdit *leaddressadduserpg;
    QPushButton *pushButton;
    QWidget *DeleteUser;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QWidget *Deposit;
    QLabel *label_20;
    QLabel *lblAmountdepopg;
    QLineEdit *leAmountDepopg;
    QPushButton *depositFundBtn;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        FidelBanksApp2 = new QStackedWidget(centralwidget);
        FidelBanksApp2->setObjectName("FidelBanksApp2");
        FidelBanksApp2->setGeometry(QRect(100, 110, 591, 361));
        Main = new QWidget();
        Main->setObjectName("Main");
        lblAdmin = new QLabel(Main);
        lblAdmin->setObjectName("lblAdmin");
        lblAdmin->setGeometry(QRect(320, 40, 54, 17));
        leAdminName = new QLineEdit(Main);
        leAdminName->setObjectName("leAdminName");
        leAdminName->setGeometry(QRect(300, 70, 113, 23));
        leAdminPassword = new QLineEdit(Main);
        leAdminPassword->setObjectName("leAdminPassword");
        leAdminPassword->setGeometry(QRect(300, 110, 113, 23));
        leAdminPassword->setEchoMode(QLineEdit::EchoMode::Password);
        lblAdminName = new QLabel(Main);
        lblAdminName->setObjectName("lblAdminName");
        lblAdminName->setGeometry(QRect(180, 70, 54, 17));
        lblAdminPassword = new QLabel(Main);
        lblAdminPassword->setObjectName("lblAdminPassword");
        lblAdminPassword->setGeometry(QRect(180, 110, 61, 20));
        btnAdmin = new QPushButton(Main);
        btnAdmin->setObjectName("btnAdmin");
        btnAdmin->setGeometry(QRect(340, 150, 75, 25));
        lblUser = new QLabel(Main);
        lblUser->setObjectName("lblUser");
        lblUser->setGeometry(QRect(340, 190, 54, 17));
        lbluserpassword = new QLabel(Main);
        lbluserpassword->setObjectName("lbluserpassword");
        lbluserpassword->setGeometry(QRect(180, 270, 54, 17));
        lblUserName = new QLabel(Main);
        lblUserName->setObjectName("lblUserName");
        lblUserName->setGeometry(QRect(180, 230, 54, 17));
        leUserName = new QLineEdit(Main);
        leUserName->setObjectName("leUserName");
        leUserName->setGeometry(QRect(300, 230, 113, 23));
        leUserpassword = new QLineEdit(Main);
        leUserpassword->setObjectName("leUserpassword");
        leUserpassword->setGeometry(QRect(300, 260, 113, 23));
        leUserpassword->setEchoMode(QLineEdit::EchoMode::Password);
        btnUser = new QPushButton(Main);
        btnUser->setObjectName("btnUser");
        btnUser->setGeometry(QRect(340, 290, 75, 25));
        FidelBanksApp2->addWidget(Main);
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        btnAdminWithdraw = new QPushButton(Admin);
        btnAdminWithdraw->setObjectName("btnAdminWithdraw");
        btnAdminWithdraw->setGeometry(QRect(20, 20, 75, 25));
        btnAdminDeposit = new QPushButton(Admin);
        btnAdminDeposit->setObjectName("btnAdminDeposit");
        btnAdminDeposit->setGeometry(QRect(110, 20, 75, 25));
        btnAdminchUserdata = new QPushButton(Admin);
        btnAdminchUserdata->setObjectName("btnAdminchUserdata");
        btnAdminchUserdata->setGeometry(QRect(200, 20, 75, 25));
        btnAdminTransfer = new QPushButton(Admin);
        btnAdminTransfer->setObjectName("btnAdminTransfer");
        btnAdminTransfer->setGeometry(QRect(280, 20, 75, 25));
        btnAdminAddUser = new QPushButton(Admin);
        btnAdminAddUser->setObjectName("btnAdminAddUser");
        btnAdminAddUser->setGeometry(QRect(360, 20, 75, 25));
        btnAdminDeleteUser = new QPushButton(Admin);
        btnAdminDeleteUser->setObjectName("btnAdminDeleteUser");
        btnAdminDeleteUser->setGeometry(QRect(450, 20, 75, 25));
        btnAdminlogout = new QPushButton(Admin);
        btnAdminlogout->setObjectName("btnAdminlogout");
        btnAdminlogout->setGeometry(QRect(460, 290, 75, 25));
        lblAdNameadminpg = new QLabel(Admin);
        lblAdNameadminpg->setObjectName("lblAdNameadminpg");
        lblAdNameadminpg->setGeometry(QRect(100, 150, 81, 17));
        leAdNameAdminpg = new QLineEdit(Admin);
        leAdNameAdminpg->setObjectName("leAdNameAdminpg");
        leAdNameAdminpg->setGeometry(QRect(230, 150, 113, 23));
        adminpgsearchbtn = new QPushButton(Admin);
        adminpgsearchbtn->setObjectName("adminpgsearchbtn");
        adminpgsearchbtn->setGeometry(QRect(200, 200, 161, 25));
        FidelBanksApp2->addWidget(Admin);
        User = new QWidget();
        User->setObjectName("User");
        btnUserWithdraw = new QPushButton(User);
        btnUserWithdraw->setObjectName("btnUserWithdraw");
        btnUserWithdraw->setGeometry(QRect(20, 30, 75, 25));
        btnUserDeposit = new QPushButton(User);
        btnUserDeposit->setObjectName("btnUserDeposit");
        btnUserDeposit->setGeometry(QRect(110, 30, 75, 25));
        btnchUseruserdata = new QPushButton(User);
        btnchUseruserdata->setObjectName("btnchUseruserdata");
        btnchUseruserdata->setGeometry(QRect(200, 30, 75, 25));
        btnUserTransfer = new QPushButton(User);
        btnUserTransfer->setObjectName("btnUserTransfer");
        btnUserTransfer->setGeometry(QRect(290, 30, 75, 25));
        btnUserLogout = new QPushButton(User);
        btnUserLogout->setObjectName("btnUserLogout");
        btnUserLogout->setGeometry(QRect(390, 30, 75, 25));
        lblAccNumusrpg = new QLabel(User);
        lblAccNumusrpg->setObjectName("lblAccNumusrpg");
        lblAccNumusrpg->setGeometry(QRect(50, 120, 111, 17));
        lblCurrenBalusrpg = new QLabel(User);
        lblCurrenBalusrpg->setObjectName("lblCurrenBalusrpg");
        lblCurrenBalusrpg->setGeometry(QRect(50, 150, 101, 17));
        lbltranshistoryusrpg = new QLabel(User);
        lbltranshistoryusrpg->setObjectName("lbltranshistoryusrpg");
        lbltranshistoryusrpg->setGeometry(QRect(60, 200, 151, 17));
        lblAcusrpg = new QLabel(User);
        lblAcusrpg->setObjectName("lblAcusrpg");
        lblAcusrpg->setGeometry(QRect(100, 240, 54, 17));
        lblAmountusrpg = new QLabel(User);
        lblAmountusrpg->setObjectName("lblAmountusrpg");
        lblAmountusrpg->setGeometry(QRect(260, 240, 54, 17));
        leuserNameusrpg = new QLineEdit(User);
        leuserNameusrpg->setObjectName("leuserNameusrpg");
        leuserNameusrpg->setGeometry(QRect(180, 80, 113, 23));
        leAccnumusrpg = new QLineEdit(User);
        leAccnumusrpg->setObjectName("leAccnumusrpg");
        leAccnumusrpg->setGeometry(QRect(180, 110, 113, 23));
        leCurrentBalusrpg = new QLineEdit(User);
        leCurrentBalusrpg->setObjectName("leCurrentBalusrpg");
        leCurrentBalusrpg->setGeometry(QRect(180, 140, 113, 23));
        leAc1usrpg = new QLineEdit(User);
        leAc1usrpg->setObjectName("leAc1usrpg");
        leAc1usrpg->setGeometry(QRect(80, 260, 113, 23));
        leamount1usrpg = new QLineEdit(User);
        leamount1usrpg->setObjectName("leamount1usrpg");
        leamount1usrpg->setGeometry(QRect(250, 260, 113, 23));
        leAc2usrpg = new QLineEdit(User);
        leAc2usrpg->setObjectName("leAc2usrpg");
        leAc2usrpg->setGeometry(QRect(80, 290, 113, 23));
        leAmount2usrpg = new QLineEdit(User);
        leAmount2usrpg->setObjectName("leAmount2usrpg");
        leAmount2usrpg->setGeometry(QRect(250, 290, 113, 23));
        leAc3usrpg = new QLineEdit(User);
        leAc3usrpg->setObjectName("leAc3usrpg");
        leAc3usrpg->setGeometry(QRect(80, 320, 113, 21));
        leAmount3usrpg = new QLineEdit(User);
        leAmount3usrpg->setObjectName("leAmount3usrpg");
        leAmount3usrpg->setGeometry(QRect(250, 320, 113, 23));
        lbluserNameusrpg = new QLabel(User);
        lbluserNameusrpg->setObjectName("lbluserNameusrpg");
        lbluserNameusrpg->setGeometry(QRect(60, 80, 71, 17));
        FidelBanksApp2->addWidget(User);
        UserData = new QWidget();
        UserData->setObjectName("UserData");
        label_8 = new QLabel(UserData);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(230, 60, 141, 17));
        label_9 = new QLabel(UserData);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 110, 81, 17));
        label_10 = new QLabel(UserData);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(150, 150, 101, 17));
        label_11 = new QLabel(UserData);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(150, 190, 101, 17));
        label_12 = new QLabel(UserData);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(150, 230, 54, 17));
        lineEdit_6 = new QLineEdit(UserData);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(270, 110, 113, 23));
        lineEdit_7 = new QLineEdit(UserData);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(270, 150, 113, 23));
        lineEdit_7->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_8 = new QLineEdit(UserData);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(270, 180, 113, 23));
        lineEdit_9 = new QLineEdit(UserData);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(270, 220, 113, 23));
        FidelBanksApp2->addWidget(UserData);
        Withdraw = new QWidget();
        Withdraw->setObjectName("Withdraw");
        label_17 = new QLabel(Withdraw);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(190, 40, 211, 41));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_19 = new QLabel(Withdraw);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(120, 160, 161, 17));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;\n"
"color:blue;}"));
        lineEdit_14 = new QLineEdit(Withdraw);
        lineEdit_14->setObjectName("lineEdit_14");
        lineEdit_14->setGeometry(QRect(270, 160, 113, 23));
        okWithdrawBtn = new QPushButton(Withdraw);
        okWithdrawBtn->setObjectName("okWithdrawBtn");
        okWithdrawBtn->setGeometry(QRect(250, 210, 75, 25));
        okWithdrawBtn->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue;}"));
        btnExitWithdraw = new QPushButton(Withdraw);
        btnExitWithdraw->setObjectName("btnExitWithdraw");
        btnExitWithdraw->setGeometry(QRect(350, 210, 75, 25));
        btnExitWithdraw->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue;}"));
        FidelBanksApp2->addWidget(Withdraw);
        Transfer = new QWidget();
        Transfer->setObjectName("Transfer");
        label_13 = new QLabel(Transfer);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(240, 70, 131, 17));
        label_14 = new QLabel(Transfer);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(170, 200, 61, 17));
        label_15 = new QLabel(Transfer);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(110, 270, 121, 17));
        lineEdit_10 = new QLineEdit(Transfer);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(260, 200, 113, 23));
        lineEdit_11 = new QLineEdit(Transfer);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(260, 270, 113, 23));
        lineEdit_12 = new QLineEdit(Transfer);
        lineEdit_12->setObjectName("lineEdit_12");
        lineEdit_12->setGeometry(QRect(260, 130, 113, 23));
        label_16 = new QLabel(Transfer);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(140, 130, 91, 20));
        FidelBanksApp2->addWidget(Transfer);
        AddNewUser = new QWidget();
        AddNewUser->setObjectName("AddNewUser");
        label = new QLabel(AddNewUser);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 121, 17));
        lblusernameadduserpg = new QLabel(AddNewUser);
        lblusernameadduserpg->setObjectName("lblusernameadduserpg");
        lblusernameadduserpg->setGeometry(QRect(130, 110, 71, 17));
        lbluserpasswordadduserpg = new QLabel(AddNewUser);
        lbluserpasswordadduserpg->setObjectName("lbluserpasswordadduserpg");
        lbluserpasswordadduserpg->setGeometry(QRect(130, 150, 91, 17));
        lblphonenumadduserpg = new QLabel(AddNewUser);
        lblphonenumadduserpg->setObjectName("lblphonenumadduserpg");
        lblphonenumadduserpg->setGeometry(QRect(130, 190, 121, 17));
        lbladdressadduserpg = new QLabel(AddNewUser);
        lbladdressadduserpg->setObjectName("lbladdressadduserpg");
        lbladdressadduserpg->setGeometry(QRect(130, 230, 121, 17));
        leuserNameadduserpg = new QLineEdit(AddNewUser);
        leuserNameadduserpg->setObjectName("leuserNameadduserpg");
        leuserNameadduserpg->setGeometry(QRect(250, 110, 113, 23));
        leuserpasswordadduserpg = new QLineEdit(AddNewUser);
        leuserpasswordadduserpg->setObjectName("leuserpasswordadduserpg");
        leuserpasswordadduserpg->setGeometry(QRect(250, 150, 113, 23));
        leuserpasswordadduserpg->setEchoMode(QLineEdit::EchoMode::Password);
        lephonenumadduserpg = new QLineEdit(AddNewUser);
        lephonenumadduserpg->setObjectName("lephonenumadduserpg");
        lephonenumadduserpg->setGeometry(QRect(250, 190, 113, 23));
        leaddressadduserpg = new QLineEdit(AddNewUser);
        leaddressadduserpg->setObjectName("leaddressadduserpg");
        leaddressadduserpg->setGeometry(QRect(250, 230, 113, 23));
        pushButton = new QPushButton(AddNewUser);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 280, 75, 25));
        FidelBanksApp2->addWidget(AddNewUser);
        DeleteUser = new QWidget();
        DeleteUser->setObjectName("DeleteUser");
        label_6 = new QLabel(DeleteUser);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 90, 121, 17));
        label_7 = new QLabel(DeleteUser);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(130, 160, 141, 17));
        lineEdit_5 = new QLineEdit(DeleteUser);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(260, 150, 113, 23));
        FidelBanksApp2->addWidget(DeleteUser);
        Deposit = new QWidget();
        Deposit->setObjectName("Deposit");
        label_20 = new QLabel(Deposit);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(180, 50, 211, 41));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        lblAmountdepopg = new QLabel(Deposit);
        lblAmountdepopg->setObjectName("lblAmountdepopg");
        lblAmountdepopg->setGeometry(QRect(120, 160, 141, 20));
        lblAmountdepopg->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        leAmountDepopg = new QLineEdit(Deposit);
        leAmountDepopg->setObjectName("leAmountDepopg");
        leAmountDepopg->setGeometry(QRect(290, 160, 113, 23));
        depositFundBtn = new QPushButton(Deposit);
        depositFundBtn->setObjectName("depositFundBtn");
        depositFundBtn->setGeometry(QRect(250, 220, 91, 25));
        pushButton_2 = new QPushButton(Deposit);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 220, 75, 25));
        FidelBanksApp2->addWidget(Deposit);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 50, 231, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;color:blue;}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblAdmin->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        lblAdminName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lblAdminPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnAdmin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        lblUser->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        lbluserpassword->setText(QCoreApplication::translate("MainWindow", "Pasword", nullptr));
        lblUserName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        btnUser->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnAdminWithdraw->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        btnAdminDeposit->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        btnAdminchUserdata->setText(QCoreApplication::translate("MainWindow", "chUserData", nullptr));
        btnAdminTransfer->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        btnAdminAddUser->setText(QCoreApplication::translate("MainWindow", "AddUser", nullptr));
        btnAdminDeleteUser->setText(QCoreApplication::translate("MainWindow", "DeleteUser", nullptr));
        btnAdminlogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        lblAdNameadminpg->setText(QCoreApplication::translate("MainWindow", "Admin Name", nullptr));
        adminpgsearchbtn->setText(QCoreApplication::translate("MainWindow", "search Account Number", nullptr));
        btnUserWithdraw->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        btnUserDeposit->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        btnchUseruserdata->setText(QCoreApplication::translate("MainWindow", "chUserdata", nullptr));
        btnUserTransfer->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        btnUserLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        lblAccNumusrpg->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        lblCurrenBalusrpg->setText(QCoreApplication::translate("MainWindow", "Current Balance", nullptr));
        lbltranshistoryusrpg->setText(QCoreApplication::translate("MainWindow", "Transaction History", nullptr));
        lblAcusrpg->setText(QCoreApplication::translate("MainWindow", "Acc Num", nullptr));
        lblAmountusrpg->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        lbluserNameusrpg->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Change User Data", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "User Password", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Withdraw", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Amount : ", nullptr));
        okWithdrawBtn->setText(QCoreApplication::translate("MainWindow", "ok", nullptr));
        btnExitWithdraw->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Transfer", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Account to Transfer", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Current Balance", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ADD USER", nullptr));
        lblusernameadduserpg->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        lbluserpasswordadduserpg->setText(QCoreApplication::translate("MainWindow", "UserPassword", nullptr));
        lblphonenumadduserpg->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        lbladdressadduserpg->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "DELETE USER", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        lblAmountdepopg->setText(QCoreApplication::translate("MainWindow", "Amoun to Deposit:", nullptr));
        depositFundBtn->setText(QCoreApplication::translate("MainWindow", "deposit fund", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Banking System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
