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

void Principal::on_NotepadButton_clicked()
{
    npd.show();
}

void Principal::on_CalcButton_clicked()
{
    sc.show();
}

void Principal::on_BankButton_clicked()
{

}
