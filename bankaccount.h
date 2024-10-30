#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <QString>
#include <QDebug>
#include<QVector>
#include <QList>

#include <QObject>

class BankAccount
{
private:
    QString username;
    QString password;
    QString address;
    int phoneNumber;
    int accountNumber;
    double balance;
    double amount;
    int pin;
public:
    BankAccount(QString username, QString password, QString address,int pin, int phoneNumber,int accountNumber);
    void setPin(int pin);
    void displayAccountDetails();
    void deposit(double amount);
    void withdraw(double amount);
    void changeUserData(QString username, QString password, QString address,int pin, int phoneNumber);
    void deleteUser();
    int getAccountNumber();
    double getAccountBalance();
};


#endif // BANKACCOUNT_H
