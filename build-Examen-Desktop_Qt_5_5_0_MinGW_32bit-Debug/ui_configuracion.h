/********************************************************************************
** Form generated from reading UI file 'configuracion.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURACION_H
#define UI_CONFIGURACION_H

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

class Ui_Configuracion
{
public:
    QLabel *banknamelbl;
    QLineEdit *banknamefield;
    QLineEdit *accountnamefield;
    QLabel *accountnamelbl;
    QLabel *accountbalancelbl;
    QLineEdit *balancefield;
    QPushButton *start;

    void setupUi(QDialog *Configuracion)
    {
        if (Configuracion->objectName().isEmpty())
            Configuracion->setObjectName(QStringLiteral("Configuracion"));
        Configuracion->resize(467, 445);
        banknamelbl = new QLabel(Configuracion);
        banknamelbl->setObjectName(QStringLiteral("banknamelbl"));
        banknamelbl->setGeometry(QRect(100, 40, 251, 20));
        banknamelbl->setAlignment(Qt::AlignCenter);
        banknamefield = new QLineEdit(Configuracion);
        banknamefield->setObjectName(QStringLiteral("banknamefield"));
        banknamefield->setGeometry(QRect(100, 60, 251, 20));
        accountnamefield = new QLineEdit(Configuracion);
        accountnamefield->setObjectName(QStringLiteral("accountnamefield"));
        accountnamefield->setGeometry(QRect(100, 150, 251, 20));
        accountnamelbl = new QLabel(Configuracion);
        accountnamelbl->setObjectName(QStringLiteral("accountnamelbl"));
        accountnamelbl->setGeometry(QRect(100, 130, 251, 20));
        accountnamelbl->setAlignment(Qt::AlignCenter);
        accountbalancelbl = new QLabel(Configuracion);
        accountbalancelbl->setObjectName(QStringLiteral("accountbalancelbl"));
        accountbalancelbl->setGeometry(QRect(100, 220, 251, 20));
        accountbalancelbl->setAlignment(Qt::AlignCenter);
        balancefield = new QLineEdit(Configuracion);
        balancefield->setObjectName(QStringLiteral("balancefield"));
        balancefield->setGeometry(QRect(100, 240, 251, 20));
        start = new QPushButton(Configuracion);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(100, 360, 251, 23));

        retranslateUi(Configuracion);

        QMetaObject::connectSlotsByName(Configuracion);
    } // setupUi

    void retranslateUi(QDialog *Configuracion)
    {
        Configuracion->setWindowTitle(QApplication::translate("Configuracion", "Dialog", 0));
        banknamelbl->setText(QApplication::translate("Configuracion", "Which bank does your account belong to?", 0));
        accountnamefield->setText(QString());
        accountnamelbl->setText(QApplication::translate("Configuracion", "If you wish, include an account number", 0));
        accountbalancelbl->setText(QApplication::translate("Configuracion", "For a correct management, provide current balance", 0));
        balancefield->setText(QString());
        start->setText(QApplication::translate("Configuracion", "Start a correct finance management", 0));
    } // retranslateUi

};

namespace Ui {
    class Configuracion: public Ui_Configuracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURACION_H
