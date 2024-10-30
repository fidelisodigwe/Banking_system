#include "bankaccount.h"

BankAccount::BankAccount(QString username, QString password, QString address,int pin, int phoneNumber, int accountNumber) {

    this->username = username;
    this->password = password;
    this->pin = pin;
    this->phoneNumber = phoneNumber;
    this->address = address;
    this->accountNumber = accountNumber;
    this->balance = 0;

}

void BankAccount::setPin(int pin)
{
    this->pin =pin;
}

void BankAccount::displayAccountDetails()
{
    qDebug() << "Account Number: " << accountNumber ;
    qDebug() << "Name: " << username ;
    qDebug() << "Phone Number: " << phoneNumber;
    qDebug() << "Balance: $" << balance;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
    qDebug() <<"Amount Deposited succesfully ! new balance : $" << balance;
}

void BankAccount::withdraw(double amount)
{
    if(amount > balance){
        qDebug() <<"Insufficient balance";
    }else
        {
        balance -= amount;
        qDebug()<<"Amount withdrawn succesfully! New balance : $" << balance;
        }
}

void BankAccount::changeUserData(QString username, QString password, QString address, int pin, int phoneNumber)
{
    this->username = username;
    this->password = password;
    this->address = address;
    this->pin = pin;
    this->phoneNumber = phoneNumber;
    qDebug()<< "Account Detail changed succesfully";
}

void BankAccount::deleteUser()
{
    username = "" ;
    password = "";
    address = "";
    phoneNumber = 0;
    pin = 0;
    balance = 0;
    qDebug() <<"Account deleted succesfully";

}

int BankAccount::getAccountNumber()
{
    return accountNumber;
}

double BankAccount::getAccountBalance()
{
    return balance;
}

QList <BankAccount> accounts;

int findAccount(QList<BankAccount>& accounts, int accountNumber){
    for(int i =0; i <accounts.size();i++){
        if(accounts[i].getAccountNumber()== accountNumber)
        {
            return i;
        }
    }
    return -1;
}
