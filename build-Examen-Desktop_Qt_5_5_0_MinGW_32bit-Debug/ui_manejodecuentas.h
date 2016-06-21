/********************************************************************************
** Form generated from reading UI file 'manejodecuentas.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANEJODECUENTAS_H
#define UI_MANEJODECUENTAS_H

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

class Ui_ManejodeCuentas
{
public:
    QLabel *label;
    QLineEdit *montofield;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *retmontofield;
    QLabel *label_5;
    QLabel *saldoactualpersonal;
    QLabel *label_6;
    QLabel *saldoactualhijo;
    QPushButton *depositar;
    QPushButton *retirar;

    void setupUi(QDialog *ManejodeCuentas)
    {
        if (ManejodeCuentas->objectName().isEmpty())
            ManejodeCuentas->setObjectName(QStringLiteral("ManejodeCuentas"));
        ManejodeCuentas->resize(700, 500);
        label = new QLabel(ManejodeCuentas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 80, 701, 20));
        label->setAlignment(Qt::AlignCenter);
        montofield = new QLineEdit(ManejodeCuentas);
        montofield->setObjectName(QStringLiteral("montofield"));
        montofield->setGeometry(QRect(290, 140, 113, 20));
        label_2 = new QLabel(ManejodeCuentas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 110, 701, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(ManejodeCuentas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 280, 701, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(ManejodeCuentas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 250, 701, 20));
        label_4->setAlignment(Qt::AlignCenter);
        retmontofield = new QLineEdit(ManejodeCuentas);
        retmontofield->setObjectName(QStringLiteral("retmontofield"));
        retmontofield->setGeometry(QRect(290, 310, 113, 20));
        label_5 = new QLabel(ManejodeCuentas);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 390, 701, 20));
        label_5->setAlignment(Qt::AlignCenter);
        saldoactualpersonal = new QLabel(ManejodeCuentas);
        saldoactualpersonal->setObjectName(QStringLiteral("saldoactualpersonal"));
        saldoactualpersonal->setGeometry(QRect(290, 420, 111, 16));
        QFont font;
        font.setPointSize(12);
        saldoactualpersonal->setFont(font);
        label_6 = new QLabel(ManejodeCuentas);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 440, 701, 20));
        label_6->setAlignment(Qt::AlignCenter);
        saldoactualhijo = new QLabel(ManejodeCuentas);
        saldoactualhijo->setObjectName(QStringLiteral("saldoactualhijo"));
        saldoactualhijo->setGeometry(QRect(290, 470, 111, 16));
        saldoactualhijo->setFont(font);
        depositar = new QPushButton(ManejodeCuentas);
        depositar->setObjectName(QStringLiteral("depositar"));
        depositar->setGeometry(QRect(310, 180, 75, 23));
        retirar = new QPushButton(ManejodeCuentas);
        retirar->setObjectName(QStringLiteral("retirar"));
        retirar->setGeometry(QRect(310, 340, 75, 23));

        retranslateUi(ManejodeCuentas);

        QMetaObject::connectSlotsByName(ManejodeCuentas);
    } // setupUi

    void retranslateUi(QDialog *ManejodeCuentas)
    {
        ManejodeCuentas->setWindowTitle(QApplication::translate("ManejodeCuentas", "Dialog", 0));
        label->setText(QApplication::translate("ManejodeCuentas", "Deposit", 0));
        label_2->setText(QApplication::translate("ManejodeCuentas", "Amount:", 0));
        label_3->setText(QApplication::translate("ManejodeCuentas", "Amount:", 0));
        label_4->setText(QApplication::translate("ManejodeCuentas", "Withdraw", 0));
        label_5->setText(QApplication::translate("ManejodeCuentas", "Current Balance (Personal Account)", 0));
        saldoactualpersonal->setText(QString());
        label_6->setText(QApplication::translate("ManejodeCuentas", "Current Balance (Child Account)", 0));
        saldoactualhijo->setText(QString());
        depositar->setText(QApplication::translate("ManejodeCuentas", "Deposit", 0));
        retirar->setText(QApplication::translate("ManejodeCuentas", "Withdraw", 0));
    } // retranslateUi

};

namespace Ui {
    class ManejodeCuentas: public Ui_ManejodeCuentas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANEJODECUENTAS_H
