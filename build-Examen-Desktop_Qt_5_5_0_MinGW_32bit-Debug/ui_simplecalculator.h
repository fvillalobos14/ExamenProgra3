/********************************************************************************
** Form generated from reading UI file 'simplecalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLECALCULATOR_H
#define UI_SIMPLECALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleCalculator
{
public:
    QAction *actionGo_Back;
    QAction *actionExit;
    QAction *actionInstructions;
    QWidget *centralwidget;
    QLineEdit *firstEdit;
    QLineEdit *secondEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *Result;
    QPushButton *SumButton;
    QPushButton *MinusButton;
    QPushButton *MultipyButton;
    QPushButton *pushButton;
    QPushButton *AverageButton;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *fourthEdit;
    QLineEdit *thirdEdit;
    QMenuBar *menubar;
    QMenu *menuQuick_Calculator;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SimpleCalculator)
    {
        if (SimpleCalculator->objectName().isEmpty())
            SimpleCalculator->setObjectName(QStringLiteral("SimpleCalculator"));
        SimpleCalculator->resize(407, 408);
        actionGo_Back = new QAction(SimpleCalculator);
        actionGo_Back->setObjectName(QStringLiteral("actionGo_Back"));
        actionExit = new QAction(SimpleCalculator);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionInstructions = new QAction(SimpleCalculator);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        centralwidget = new QWidget(SimpleCalculator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        firstEdit = new QLineEdit(centralwidget);
        firstEdit->setObjectName(QStringLiteral("firstEdit"));
        firstEdit->setGeometry(QRect(47, 60, 113, 21));
        secondEdit = new QLineEdit(centralwidget);
        secondEdit->setObjectName(QStringLiteral("secondEdit"));
        secondEdit->setGeometry(QRect(237, 60, 113, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 91, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 30, 91, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(82, 211, 59, 16));
        Result = new QLabel(centralwidget);
        Result->setObjectName(QStringLiteral("Result"));
        Result->setGeometry(QRect(140, 210, 181, 21));
        Result->setAlignment(Qt::AlignCenter);
        SumButton = new QPushButton(centralwidget);
        SumButton->setObjectName(QStringLiteral("SumButton"));
        SumButton->setGeometry(QRect(40, 270, 81, 32));
        MinusButton = new QPushButton(centralwidget);
        MinusButton->setObjectName(QStringLiteral("MinusButton"));
        MinusButton->setGeometry(QRect(20, 310, 115, 32));
        MultipyButton = new QPushButton(centralwidget);
        MultipyButton->setObjectName(QStringLiteral("MultipyButton"));
        MultipyButton->setGeometry(QRect(140, 270, 115, 32));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 310, 115, 32));
        AverageButton = new QPushButton(centralwidget);
        AverageButton->setObjectName(QStringLiteral("AverageButton"));
        AverageButton->setEnabled(true);
        AverageButton->setGeometry(QRect(270, 290, 115, 32));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(73, 100, 91, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(253, 100, 91, 20));
        fourthEdit = new QLineEdit(centralwidget);
        fourthEdit->setObjectName(QStringLiteral("fourthEdit"));
        fourthEdit->setGeometry(QRect(240, 130, 113, 21));
        thirdEdit = new QLineEdit(centralwidget);
        thirdEdit->setObjectName(QStringLiteral("thirdEdit"));
        thirdEdit->setGeometry(QRect(50, 130, 113, 21));
        SimpleCalculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SimpleCalculator);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 407, 22));
        menuQuick_Calculator = new QMenu(menubar);
        menuQuick_Calculator->setObjectName(QStringLiteral("menuQuick_Calculator"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        SimpleCalculator->setMenuBar(menubar);
        statusbar = new QStatusBar(SimpleCalculator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SimpleCalculator->setStatusBar(statusbar);
        toolBar = new QToolBar(SimpleCalculator);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        SimpleCalculator->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuQuick_Calculator->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuQuick_Calculator->addAction(actionGo_Back);
        menuQuick_Calculator->addAction(actionExit);
        menuAbout->addAction(actionInstructions);
        toolBar->addAction(actionInstructions);
        toolBar->addSeparator();
        toolBar->addAction(actionGo_Back);
        toolBar->addAction(actionExit);

        retranslateUi(SimpleCalculator);

        QMetaObject::connectSlotsByName(SimpleCalculator);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleCalculator)
    {
        SimpleCalculator->setWindowTitle(QApplication::translate("SimpleCalculator", "MainWindow", 0));
        actionGo_Back->setText(QApplication::translate("SimpleCalculator", "Go Back", 0));
        actionExit->setText(QApplication::translate("SimpleCalculator", "Exit", 0));
        actionInstructions->setText(QApplication::translate("SimpleCalculator", "Instructions", 0));
        label->setText(QApplication::translate("SimpleCalculator", "First Value", 0));
        label_2->setText(QApplication::translate("SimpleCalculator", "Second Value", 0));
        label_3->setText(QApplication::translate("SimpleCalculator", "Result", 0));
        Result->setText(QString());
        SumButton->setText(QApplication::translate("SimpleCalculator", "ADD", 0));
        MinusButton->setText(QApplication::translate("SimpleCalculator", "SUBSTRACT", 0));
        MultipyButton->setText(QApplication::translate("SimpleCalculator", "MULTIPLY", 0));
        pushButton->setText(QApplication::translate("SimpleCalculator", "DIVIDE", 0));
        AverageButton->setText(QApplication::translate("SimpleCalculator", "AVERAGE", 0));
        label_5->setText(QApplication::translate("SimpleCalculator", "Third Value", 0));
        label_6->setText(QApplication::translate("SimpleCalculator", "Fourth Value", 0));
        menuQuick_Calculator->setTitle(QApplication::translate("SimpleCalculator", "Quick Calculator", 0));
        menuAbout->setTitle(QApplication::translate("SimpleCalculator", "About", 0));
        toolBar->setWindowTitle(QApplication::translate("SimpleCalculator", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class SimpleCalculator: public Ui_SimpleCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLECALCULATOR_H
