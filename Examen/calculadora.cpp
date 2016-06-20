#include "calculadora.h"
#include "ui_calculadora.h"

Calculadora::Calculadora(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculadora)
{
    ui->setupUi(this);
}

Calculadora::~Calculadora()
{
    delete ui;
}
