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
    ManejodeCuentas *manejos = new ManejodeCuentas();
    QString bankName = ui->banknamefield->text();
    QString accountNumber = ui->accountnamefield->text();
    QString balance =ui->balancefield->text();

    std::string bnstring = bankName.toLocal8Bit().constData();
    int aint = accountNumber.split(" ")[0].toInt();
    int bint = balance.split(" ")[0].toInt();

    cout<<bnstring<<endl;
    cout<<aint<<endl;
    cout<<bint<<endl;

    CuentaPersonal cuentaNueva(aint,bnstring,bint);
    manejos->addCuentaPersonal(cuentaNueva,0);

    ui->balancefield->clear();
    ui->banknamefield->clear();
    ui->accountnamefield->clear();
}
