/********************************************************************************
** Form generated from reading UI file 'findbox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOX_H
#define UI_FINDBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_findBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *findBox)
    {
        if (findBox->objectName().isEmpty())
            findBox->setObjectName("findBox");
        findBox->resize(609, 300);
        label = new QLabel(findBox);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 60, 361, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_2 = new QLabel(findBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 140, 191, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue}"));
        lineEdit = new QLineEdit(findBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(330, 140, 113, 23));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        pushButton = new QPushButton(findBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 200, 75, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue}"));

        retranslateUi(findBox);

        QMetaObject::connectSlotsByName(findBox);
    } // setupUi

    void retranslateUi(QDialog *findBox)
    {
        findBox->setWindowTitle(QCoreApplication::translate("findBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("findBox", "Account Number Search", nullptr));
        label_2->setText(QCoreApplication::translate("findBox", "Enter Account Number:", nullptr));
        pushButton->setText(QCoreApplication::translate("findBox", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class findBox: public Ui_findBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOX_H
