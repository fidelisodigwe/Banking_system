/********************************************************************************
** Form generated from reading UI file 'finddelbox.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDELBOX_H
#define UI_FINDDELBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_finddelBox
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *finddelBox)
    {
        if (finddelBox->objectName().isEmpty())
            finddelBox->setObjectName("finddelBox");
        finddelBox->resize(685, 346);
        label = new QLabel(finddelBox);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 60, 261, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{font-size:30px;}"));
        label_2 = new QLabel(finddelBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 140, 181, 17));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{font-size:15px;color:blue;}"));
        lineEdit = new QLineEdit(finddelBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(370, 140, 113, 23));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{font-size:15px;}"));
        pushButton = new QPushButton(finddelBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(420, 210, 75, 25));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font-size:15px;color:blue;}"));

        retranslateUi(finddelBox);

        QMetaObject::connectSlotsByName(finddelBox);
    } // setupUi

    void retranslateUi(QDialog *finddelBox)
    {
        finddelBox->setWindowTitle(QCoreApplication::translate("finddelBox", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("finddelBox", "Delete User", nullptr));
        label_2->setText(QCoreApplication::translate("finddelBox", "Enter Account Number:", nullptr));
        pushButton->setText(QCoreApplication::translate("finddelBox", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finddelBox: public Ui_finddelBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDELBOX_H
