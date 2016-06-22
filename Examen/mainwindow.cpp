#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configuracion.h"
#include "configuracion2.h"
#include "manejodecuentas.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_personal_clicked()
{
    Configuracion config;
    config.setModal(true);
    config.exec();

}

void MainWindow::on_hijos_clicked()
{
    configuracion2 config;
    config.setModal(true);
    config.exec();
}


void MainWindow::on_pushButton_clicked()
{
     ManejodeCuentas manejo;
     manejo.setModal(true);
     manejo.exec();

}
