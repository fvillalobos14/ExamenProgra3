/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionGo_Back;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuArchives;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(600, 445);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionGo_Back = new QAction(Notepad);
        actionGo_Back->setObjectName(QStringLiteral("actionGo_Back"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGo_Back->setIcon(icon2);
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuArchives = new QMenu(menubar);
        menuArchives->setObjectName(QStringLiteral("menuArchives"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuArchives->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuArchives->addAction(actionOpen);
        menuArchives->addAction(actionSave);
        menuArchives->addSeparator();
        menuArchives->addAction(actionGo_Back);
        menuArchives->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionGo_Back);
        toolBar->addAction(actionExit);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "MainWindow", 0));
        actionOpen->setText(QApplication::translate("Notepad", "Open", 0));
        actionSave->setText(QApplication::translate("Notepad", "Save", 0));
        actionGo_Back->setText(QApplication::translate("Notepad", "Go Back", 0));
        actionCopy->setText(QApplication::translate("Notepad", "Copy", 0));
        actionPaste->setText(QApplication::translate("Notepad", "Paste", 0));
        actionCut->setText(QApplication::translate("Notepad", "Cut", 0));
        actionExit->setText(QApplication::translate("Notepad", "Exit", 0));
        menuArchives->setTitle(QApplication::translate("Notepad", "Archives", 0));
        menuEdit->setTitle(QApplication::translate("Notepad", "Edit", 0));
        toolBar->setWindowTitle(QApplication::translate("Notepad", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
