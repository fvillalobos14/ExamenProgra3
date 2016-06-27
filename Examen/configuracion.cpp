#include "configuracion.h"
#include "ui_configuracion.h"

Configuracion::Configuracion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Configuracion)
{
    ui->setupUi(this);
}

Configuracion::~Configuracion()
{
    delete ui;
}

void Configuracion::on_start_clicked()
{
    QString bankName = ui->banknamefield->text();
    QString accountNumber = ui->accountnamefield->text();
    QString balance =ui->balancefield->text();
    QString name = ui->namefield->text();

    std::string bnstring = bankName.toLocal8Bit().constData();
    std::string nstring = name.toLocal8Bit().constData();
    int aint = accountNumber.split(" ")[0].toInt();
    int bint = balance.split(" ")[0].toInt();

    CuentaPersonal cuentaNueva(aint,bnstring,nstring,bint);
    ManejodeCuentas manejos;
    manejos.addCuentaPersonal(cuentaNueva);
    cout<<bnstring<<endl;
    cout<<aint<<endl;
    cout<<bint<<endl;
    //manejos.addCuentaPersonal(cuentaNueva,0);



    ui->balancefield->clear();
    ui->banknamefield->clear();
    ui->accountnamefield->clear();
    ui->namefield->clear();
}
