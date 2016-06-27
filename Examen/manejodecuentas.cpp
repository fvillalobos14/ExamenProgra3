#include "manejodecuentas.h"
#include "ui_manejodecuentas.h"

ManejodeCuentas::ManejodeCuentas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManejodeCuentas)
{
    ui->setupUi(this);
    int saldo = (leerCuentaPersonal())->getSaldo();
    QString saldoPersonal = QString::number(saldo);
    int saldo2 = (leerCuentaHijo())->getSaldo();
    QString saldoHijo = QString::number(saldo2);
    ui->saldoactualpersonal->setText(saldoPersonal);
    ui->saldoactualhijo->setText(saldoHijo);
}


void ManejodeCuentas::addCuentaPersonal(CuentaPersonal cp){
    string nombre_archivo = "cuentasPersonales";
    ofstream out (nombre_archivo.c_str(),ios::in);
        if(!out.is_open())
        {
            out.open(nombre_archivo.c_str());
        }
        //int cuenta = cp.getCuenta();
        //double saldo = cp.getSaldo();
        out.seekp(0);
        out.write((char*)&cp.numeroCuenta,4);
        out.write(cp.getNombre().c_str(),20);
        out.write(cp.getNombreBanco().c_str(),20);
        out.write((char*)&cp.saldo,sizeof(cp.saldo));
        out.close();
}

void ManejodeCuentas::addCuentaHijos(AhorroH ahorros){
    string nombre_archivo = "cuentasHijos";
    ofstream out (nombre_archivo.c_str(),ios::in);
        if(!out.is_open())
        {
            out.open(nombre_archivo.c_str());
        }
        out.seekp(0);
        out.write((char*)&ahorros.numeroCuenta,4);
        out.write(ahorros.getNombre().c_str(),20);
        out.write(ahorros.getNombreBanco().c_str(),20);
        out.write((char*)&ahorros.saldo,sizeof(ahorros.saldo));
        out.close();
}

CuentaPersonal *ManejodeCuentas::leerCuentaPersonal(){
    string nombre_archivo = "cuentasPersonales";
    int cuenta;
    char nombre[20];
    char nombreBanco[20];
    double saldo;
    ifstream in(nombre_archivo.c_str());
        in.seekg(0);
            in.read((char*)&cuenta,4);
            in.read(nombre,20);
            in.read(nombreBanco,20);
            in.read((char*)&saldo,sizeof(saldo));

        in.close();
        if(saldo!=0){
            return new CuentaPersonal(cuenta,nombreBanco,nombre,saldo);
        }
        else{
            return new CuentaPersonal(0,"","",0);
        }
}

AhorroH *ManejodeCuentas::leerCuentaHijo(){
    string nombre_archivo = "cuentasHijos";
    int cuenta;
    char nombre[20];
    char nombreBanco[20];
    double saldo;
    ifstream in(nombre_archivo.c_str());
        in.seekg(0);
            in.read((char*)&cuenta,4);
            in.read(nombre,20);
            in.read(nombreBanco,20);
            in.read((char*)&saldo,sizeof(saldo));

        in.close();
        if(saldo!=0){
            return new AhorroH(cuenta,nombreBanco,nombre,saldo);
        }
        else{
            return new AhorroH(0,"","",0);
        }
}


ManejodeCuentas::~ManejodeCuentas()
{
    delete ui;
}

void ManejodeCuentas::on_depositar_clicked()
{
    double saldo = (leerCuentaPersonal())->getSaldo();
    QString montoDeposito = ui->montofield->text();
    double monto = montoDeposito.split(" ")[0].toDouble();
    QString saldoActual = QString::number(saldo+monto);
    ui->saldoactualpersonal->setText(saldoActual);
    int cuenta = (leerCuentaPersonal())->getCuenta();
    string nombre = (leerCuentaPersonal())->getNombre();
    string nombreBanco = (leerCuentaPersonal())->getNombreBanco();
    CuentaPersonal cuentaActualizada(cuenta,nombreBanco,nombre,saldo+monto);
    addCuentaPersonal(cuentaActualizada);
    ui->depositar->setEnabled(false);
}

void ManejodeCuentas::on_depositar2_clicked()
{
    double saldo = (leerCuentaHijo())->getSaldo();
    QString montoDeposito = ui->montofield->text();
    double monto = montoDeposito.split(" ")[0].toDouble();
    QString saldoActual = QString::number(saldo+monto);
    ui->saldoactualhijo->setText(saldoActual);
    int cuenta = (leerCuentaHijo())->getCuenta();
    string nombre = (leerCuentaHijo())->getNombre();
    string nombreBanco = (leerCuentaHijo())->getNombreBanco();
    AhorroH cuentaActualizada(cuenta,nombreBanco,nombre,saldo+monto);
    addCuentaHijos(cuentaActualizada);
    double saldo2 = (leerCuentaPersonal())->getSaldo();
    QString saldoActual2 = QString::number(saldo2-monto);
    ui->saldoactualpersonal->setText(saldoActual2);

    //actualizar en archivo
    int cuenta2 = (leerCuentaPersonal())->getCuenta();
    string nombre2 = (leerCuentaPersonal())->getNombre();
    string nombreBanco2 = (leerCuentaPersonal())->getNombreBanco();
    CuentaPersonal cuentaActualizada2(cuenta2,nombreBanco2,nombre2,saldo2-monto);
    addCuentaPersonal(cuentaActualizada2);
    ui->depositar2->setEnabled(false);
    ui->depositar->setEnabled(false);
}

void ManejodeCuentas::on_retirar_clicked()
{
    double saldo = (leerCuentaPersonal())->getSaldo();
    QString montoDeposito = ui->retmontofield->text();
    double monto = montoDeposito.split(" ")[0].toDouble();
    QString saldoActual = QString::number(saldo-monto);
    ui->saldoactualpersonal->setText(saldoActual);
    int cuenta = (leerCuentaPersonal())->getCuenta();
    string nombre = (leerCuentaPersonal())->getNombre();
    string nombreBanco = (leerCuentaPersonal())->getNombreBanco();
    CuentaPersonal cuentaActualizada(cuenta,nombreBanco,nombre,saldo-monto);
    addCuentaPersonal(cuentaActualizada);
    ui->retirar->setEnabled(false);
}
