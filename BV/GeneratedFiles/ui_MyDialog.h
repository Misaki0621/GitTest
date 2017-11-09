/********************************************************************************
** Form generated from reading UI file 'MyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QStringLiteral("MyDialog"));
        MyDialog->resize(223, 159);
        QIcon icon;
        icon.addFile(QStringLiteral("../../../a.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MyDialog->setWindowIcon(icon);
        pushButton = new QPushButton(MyDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 130, 75, 23));
        label = new QLabel(MyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 54, 12));
        label_2 = new QLabel(MyDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 54, 12));
        label_3 = new QLabel(MyDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 54, 12));
        label_4 = new QLabel(MyDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 110, 54, 12));
        label_5 = new QLabel(MyDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 20, 54, 12));
        label_6 = new QLabel(MyDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 50, 54, 12));
        label_7 = new QLabel(MyDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(150, 80, 54, 12));
        label_8 = new QLabel(MyDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 110, 54, 12));

        retranslateUi(MyDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), MyDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "\350\207\252\346\243\200", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyDialog", "\347\241\256\345\256\232", Q_NULLPTR));
        label->setText(QApplication::translate("MyDialog", "\350\275\254\347\233\230\347\224\265\346\234\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyDialog", "\346\273\264\346\266\262\347\224\265\346\234\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("MyDialog", "\346\270\251\346\216\247\346\250\241\345\235\227", Q_NULLPTR));
        label_4->setText(QApplication::translate("MyDialog", "\346\213\215\347\205\247\346\250\241\345\235\227", Q_NULLPTR));
        label_5->setText(QApplication::translate("MyDialog", "Normal", Q_NULLPTR));
        label_6->setText(QApplication::translate("MyDialog", "Normal", Q_NULLPTR));
        label_7->setText(QApplication::translate("MyDialog", "Normal", Q_NULLPTR));
        label_8->setText(QApplication::translate("MyDialog", "Normal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
