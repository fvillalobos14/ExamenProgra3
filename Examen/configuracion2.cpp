#include "configuracion2.h"
#include "ui_configuracion2.h"

configuracion2::configuracion2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::configuracion2)
{
    ui->setupUi(this);
}

configuracion2::~configuracion2()
{
    delete ui;
}
