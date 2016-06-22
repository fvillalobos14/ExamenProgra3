#include "notepad.h"
#include "ui_notepad.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    setCentralWidget(ui->plainTextEdit);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionOpen_triggered()
{
    QFile arc;
    QTextStream qts;
    QString name;
    name = QFileDialog::getOpenFileName(this, "Open File.");
    arc.setFileName(name);
    arc.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!arc.isOpen()){
        QMessageBox::critical(this,"File not opened correctly! ):", arc.errorString());
    }
    qts.setDevice(&arc);
    ui->plainTextEdit->setPlainText(qts.readAll());
    arc.close();
}

void Notepad::on_actionSave_triggered()
{
    QFile arc;
    QTextStream qts;
    QString name;
    name = QFileDialog::getSaveFileName(this, "Save File.");
    arc.setFileName(name);
    arc.open(QIODevice::WriteOnly | QIODevice::Text);
    if(!arc.isOpen()){
        QMessageBox::critical(this,"File not opened correctly! ):", arc.errorString());
    }
    qts.setDevice(&arc);
    qts << ui->plainTextEdit->toPlainText();
    arc.flush();
    arc.close();
}

void Notepad::on_actionGo_Back_triggered()
{
    this->setVisible(false);
}

void Notepad::on_actionCopy_triggered()
{
    ui->plainTextEdit->copy();
}

void Notepad::on_actionPaste_triggered()
{
    ui->plainTextEdit->paste();
}

void Notepad::on_actionCut_triggered()
{
    ui->plainTextEdit->cut();
}



void Notepad::on_actionExit_triggered()
{
   QCoreApplication::quit();
}
