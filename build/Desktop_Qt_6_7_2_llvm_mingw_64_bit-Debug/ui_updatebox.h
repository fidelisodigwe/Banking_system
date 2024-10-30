/********************************************************************************
** Form generated from reading UI file 'updatebox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEBOX_H
#define UI_UPDATEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updateBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *lineEdit_5;

    void setupUi(QDialog *updateBox)
    {
        if (updateBox->objectName().isEmpty())
            updateBox->setObjectName("updateBox");
        updateBox->resize(723, 387);
        label = new QLabel(updateBox);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 59, 291, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_2 = new QLabel(updateBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 170, 91, 17));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_3 = new QLabel(updateBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 210, 111, 17));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_4 = new QLabel(updateBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 250, 111, 17));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_5 = new QLabel(updateBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 280, 111, 17));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        lineEdit = new QLineEdit(updateBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 170, 113, 23));
        lineEdit_2 = new QLineEdit(updateBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(360, 200, 113, 23));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_3 = new QLineEdit(updateBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(360, 240, 113, 23));
        lineEdit_4 = new QLineEdit(updateBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(360, 280, 113, 23));
        pushButton = new QPushButton(updateBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(430, 320, 75, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue}"));
        label_6 = new QLabel(updateBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 140, 121, 17));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        lineEdit_5 = new QLineEdit(updateBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(360, 140, 113, 23));

        retranslateUi(updateBox);

        QMetaObject::connectSlotsByName(updateBox);
    } // setupUi

    void retranslateUi(QDialog *updateBox)
    {
        updateBox->setWindowTitle(QCoreApplication::translate("updateBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("updateBox", "Change User Data", nullptr));
        label_2->setText(QCoreApplication::translate("updateBox", "User name:", nullptr));
        label_3->setText(QCoreApplication::translate("updateBox", "User password:", nullptr));
        label_4->setText(QCoreApplication::translate("updateBox", "Phone number:", nullptr));
        label_5->setText(QCoreApplication::translate("updateBox", "Address:", nullptr));
        pushButton->setText(QCoreApplication::translate("updateBox", "update", nullptr));
        label_6->setText(QCoreApplication::translate("updateBox", "Account number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class updateBox: public Ui_updateBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEBOX_H
