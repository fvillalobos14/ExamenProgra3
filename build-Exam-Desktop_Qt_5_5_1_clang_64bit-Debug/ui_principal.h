/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Principal
{
public:
    QWidget *centralWidget;
    QPushButton *BankButton;
    QPushButton *NotepadButton;
    QPushButton *CalcButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Principal)
    {
        if (Principal->objectName().isEmpty())
            Principal->setObjectName(QStringLiteral("Principal"));
        Principal->resize(350, 450);
        centralWidget = new QWidget(Principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BankButton = new QPushButton(centralWidget);
        BankButton->setObjectName(QStringLiteral("BankButton"));
        BankButton->setGeometry(QRect(90, 180, 171, 31));
        NotepadButton = new QPushButton(centralWidget);
        NotepadButton->setObjectName(QStringLiteral("NotepadButton"));
        NotepadButton->setGeometry(QRect(90, 250, 171, 31));
        CalcButton = new QPushButton(centralWidget);
        CalcButton->setObjectName(QStringLiteral("CalcButton"));
        CalcButton->setGeometry(QRect(90, 320, 171, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 20, 211, 141));
        label->setPixmap(QPixmap(QString::fromUtf8(":/others/logo.png")));
        Principal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Principal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 350, 22));
        Principal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Principal);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Principal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Principal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Principal->setStatusBar(statusBar);

        retranslateUi(Principal);

        QMetaObject::connectSlotsByName(Principal);
    } // setupUi

    void retranslateUi(QMainWindow *Principal)
    {
        Principal->setWindowTitle(QApplication::translate("Principal", "Principal", 0));
        BankButton->setText(QApplication::translate("Principal", "Bank Account Manager", 0));
        NotepadButton->setText(QApplication::translate("Principal", "Notepad", 0));
        CalcButton->setText(QApplication::translate("Principal", "Calculator", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Principal: public Ui_Principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
