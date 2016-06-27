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

void configuracion2::on_start_clicked()
{
    ManejodeCuentas manejos;

    QString bankName = ui->banknamefield->text();
    QString accountNumber = ui->accountnamefield->text();
    QString balance =ui->balancefield->text();
    QString name = ui->namefield->text();

    std::string bnstring = bankName.toLocal8Bit().constData();
    std::string nstring = name.toLocal8Bit().constData();
    int aint = accountNumber.split(" ")[0].toInt();
    int bint = balance.split(" ")[0].toInt();

    AhorroH cuentaNueva(aint,bnstring,nstring,bint);

    manejos.addCuentaHijos(cuentaNueva);
    cout<<bnstring<<endl;
    cout<<aint<<endl;
    cout<<bint<<endl;
    //manejos.addCuentaPersonal(cuentaNueva,0);



    ui->balancefield->clear();
    ui->banknamefield->clear();
    ui->accountnamefield->clear();
    ui->namefield->clear();
}
