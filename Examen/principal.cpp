#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_pushButton_3_clicked()
{
    sc.show();
}

void Principal::on_pushButton_2_clicked()
{
    npd.show();
}

void Principal::on_pushButton_clicked()
{
    w.show();
}
