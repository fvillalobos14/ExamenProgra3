/********************************************************************************
** Form generated from reading UI file 'configuracion2.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION2_H
#define UI_CONFIGURACION2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_configuracion2
{
public:
    QLineEdit *balancefield;
    QLineEdit *banknamefield;
    QLineEdit *accountnamefield;
    QLabel *accountnamelbl;
    QLabel *accountbalancelbl;
    QLabel *banknamelbl;
    QPushButton *start;
    QLineEdit *namefield;
    QLabel *accountbalancelbl_2;

    void setupUi(QDialog *configuracion2)
    {
        if (configuracion2->objectName().isEmpty())
            configuracion2->setObjectName(QStringLiteral("configuracion2"));
        configuracion2->resize(396, 445);
        balancefield = new QLineEdit(configuracion2);
        balancefield->setObjectName(QStringLiteral("balancefield"));
        balancefield->setGeometry(QRect(70, 240, 251, 20));
        banknamefield = new QLineEdit(configuracion2);
        banknamefield->setObjectName(QStringLiteral("banknamefield"));
        banknamefield->setGeometry(QRect(70, 100, 251, 20));
        accountnamefield = new QLineEdit(configuracion2);
        accountnamefield->setObjectName(QStringLiteral("accountnamefield"));
        accountnamefield->setGeometry(QRect(70, 170, 251, 20));
        accountnamelbl = new QLabel(configuracion2);
        accountnamelbl->setObjectName(QStringLiteral("accountnamelbl"));
        accountnamelbl->setGeometry(QRect(70, 150, 251, 20));
        accountnamelbl->setAlignment(Qt::AlignCenter);
        accountbalancelbl = new QLabel(configuracion2);
        accountbalancelbl->setObjectName(QStringLiteral("accountbalancelbl"));
        accountbalancelbl->setGeometry(QRect(70, 220, 251, 20));
        accountbalancelbl->setAlignment(Qt::AlignCenter);
        banknamelbl = new QLabel(configuracion2);
        banknamelbl->setObjectName(QStringLiteral("banknamelbl"));
        banknamelbl->setGeometry(QRect(70, 80, 251, 20));
        banknamelbl->setAlignment(Qt::AlignCenter);
        start = new QPushButton(configuracion2);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(70, 370, 251, 23));
        namefield = new QLineEdit(configuracion2);
        namefield->setObjectName(QStringLiteral("namefield"));
        namefield->setGeometry(QRect(70, 310, 251, 20));
        accountbalancelbl_2 = new QLabel(configuracion2);
        accountbalancelbl_2->setObjectName(QStringLiteral("accountbalancelbl_2"));
        accountbalancelbl_2->setGeometry(QRect(70, 290, 251, 20));
        accountbalancelbl_2->setAlignment(Qt::AlignCenter);

        retranslateUi(configuracion2);

        QMetaObject::connectSlotsByName(configuracion2);
    } // setupUi

    void retranslateUi(QDialog *configuracion2)
    {
        configuracion2->setWindowTitle(QApplication::translate("configuracion2", "Dialog", 0));
        balancefield->setText(QString());
        accountnamefield->setText(QString());
        accountnamelbl->setText(QApplication::translate("configuracion2", "If you wish, include an account number", 0));
        accountbalancelbl->setText(QApplication::translate("configuracion2", "For a correct management, provide current balance", 0));
        banknamelbl->setText(QApplication::translate("configuracion2", "Which bank does your account belong to?", 0));
        start->setText(QApplication::translate("configuracion2", "Start a correct finance management", 0));
        namefield->setText(QString());
        accountbalancelbl_2->setText(QApplication::translate("configuracion2", "Who is the owner of the account?", 0));
    } // retranslateUi

};

namespace Ui {
    class configuracion2: public Ui_configuracion2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION2_H
