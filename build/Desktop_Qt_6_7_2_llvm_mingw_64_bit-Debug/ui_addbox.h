/********************************************************************************
** Form generated from reading UI file 'addbox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOX_H
#define UI_ADDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;

    void setupUi(QDialog *addBox)
    {
        if (addBox->objectName().isEmpty())
            addBox->setObjectName("addBox");
        addBox->resize(611, 399);
        label = new QLabel(addBox);
        label->setObjectName("label");
        label->setGeometry(QRect(143, 79, 271, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_2 = new QLabel(addBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 150, 121, 17));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_3 = new QLabel(addBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 190, 121, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_4 = new QLabel(addBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 220, 121, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_5 = new QLabel(addBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 250, 121, 21));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        label_6 = new QLabel(addBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(140, 290, 141, 21));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        lineEdit = new QLineEdit(addBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 150, 113, 23));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        lineEdit_2 = new QLineEdit(addBox);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(290, 180, 113, 23));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_3 = new QLineEdit(addBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(290, 220, 113, 23));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        lineEdit_4 = new QLineEdit(addBox);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(290, 250, 113, 23));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        lineEdit_5 = new QLineEdit(addBox);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(290, 280, 113, 23));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        pushButton = new QPushButton(addBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 320, 111, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{color:blue;}"));

        retranslateUi(addBox);

        QMetaObject::connectSlotsByName(addBox);
    } // setupUi

    void retranslateUi(QDialog *addBox)
    {
        addBox->setWindowTitle(QCoreApplication::translate("addBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addBox", "Add New User Info", nullptr));
        label_2->setText(QCoreApplication::translate("addBox", "User name:", nullptr));
        label_3->setText(QCoreApplication::translate("addBox", "User password: ", nullptr));
        label_4->setText(QCoreApplication::translate("addBox", "Phone number:", nullptr));
        label_5->setText(QCoreApplication::translate("addBox", "Address:", nullptr));
        label_6->setText(QCoreApplication::translate("addBox", "Account number: ", nullptr));
        pushButton->setText(QCoreApplication::translate("addBox", "Create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBox: public Ui_addBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOX_H
