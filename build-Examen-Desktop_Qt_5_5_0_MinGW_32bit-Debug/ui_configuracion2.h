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
    QLabel *accountbalancelbl;
    QPushButton *start;
    QLineEdit *accountnamefield;
    QLineEdit *balancefield;
    QLabel *banknamelbl;
    QLabel *accountnamelbl;
    QLineEdit *banknamefield;

    void setupUi(QDialog *configuracion2)
    {
        if (configuracion2->objectName().isEmpty())
            configuracion2->setObjectName(QStringLiteral("configuracion2"));
        configuracion2->resize(396, 412);
        accountbalancelbl = new QLabel(configuracion2);
        accountbalancelbl->setObjectName(QStringLiteral("accountbalancelbl"));
        accountbalancelbl->setGeometry(QRect(70, 210, 251, 20));
        accountbalancelbl->setAlignment(Qt::AlignCenter);
        start = new QPushButton(configuracion2);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(70, 310, 251, 23));
        accountnamefield = new QLineEdit(configuracion2);
        accountnamefield->setObjectName(QStringLiteral("accountnamefield"));
        accountnamefield->setGeometry(QRect(70, 140, 251, 20));
        balancefield = new QLineEdit(configuracion2);
        balancefield->setObjectName(QStringLiteral("balancefield"));
        balancefield->setGeometry(QRect(70, 230, 251, 20));
        banknamelbl = new QLabel(configuracion2);
        banknamelbl->setObjectName(QStringLiteral("banknamelbl"));
        banknamelbl->setGeometry(QRect(70, 30, 251, 20));
        banknamelbl->setAlignment(Qt::AlignCenter);
        accountnamelbl = new QLabel(configuracion2);
        accountnamelbl->setObjectName(QStringLiteral("accountnamelbl"));
        accountnamelbl->setGeometry(QRect(70, 120, 251, 20));
        accountnamelbl->setAlignment(Qt::AlignCenter);
        banknamefield = new QLineEdit(configuracion2);
        banknamefield->setObjectName(QStringLiteral("banknamefield"));
        banknamefield->setGeometry(QRect(70, 50, 251, 20));

        retranslateUi(configuracion2);

        QMetaObject::connectSlotsByName(configuracion2);
    } // setupUi

    void retranslateUi(QDialog *configuracion2)
    {
        configuracion2->setWindowTitle(QApplication::translate("configuracion2", "Dialog", 0));
        accountbalancelbl->setText(QApplication::translate("configuracion2", "For a correct management, provide current balance", 0));
        start->setText(QApplication::translate("configuracion2", "Start a correct finance management", 0));
        accountnamefield->setText(QString());
        balancefield->setText(QString());
        banknamelbl->setText(QApplication::translate("configuracion2", "Which bank does the account belong to?", 0));
        accountnamelbl->setText(QApplication::translate("configuracion2", "If you wish, include the account number", 0));
    } // retranslateUi

};

namespace Ui {
    class configuracion2: public Ui_configuracion2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION2_H
