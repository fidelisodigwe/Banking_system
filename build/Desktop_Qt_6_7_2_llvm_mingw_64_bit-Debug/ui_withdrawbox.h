/********************************************************************************
** Form generated from reading UI file 'withdrawbox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWBOX_H
#define UI_WITHDRAWBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_withdrawBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *withdrawBox)
    {
        if (withdrawBox->objectName().isEmpty())
            withdrawBox->setObjectName("withdrawBox");
        withdrawBox->resize(707, 300);
        label = new QLabel(withdrawBox);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 46, 241, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_2 = new QLabel(withdrawBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 130, 211, 17));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:20px;\n"
"color:blue;}"));
        lineEdit = new QLineEdit(withdrawBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(370, 130, 113, 23));
        pushButton = new QPushButton(withdrawBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 190, 75, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue;}"));

        retranslateUi(withdrawBox);

        QMetaObject::connectSlotsByName(withdrawBox);
    } // setupUi

    void retranslateUi(QDialog *withdrawBox)
    {
        withdrawBox->setWindowTitle(QCoreApplication::translate("withdrawBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("withdrawBox", "Withdraw Page", nullptr));
        label_2->setText(QCoreApplication::translate("withdrawBox", "Enter Amount :", nullptr));
        pushButton->setText(QCoreApplication::translate("withdrawBox", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class withdrawBox: public Ui_withdrawBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWBOX_H
