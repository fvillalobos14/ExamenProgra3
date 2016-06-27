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
        out.seekp(0,ios::end);
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
        out.seekp(0,ios::end);
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
        return new CuentaPersonal(cuenta,nombreBanco,nombre,saldo);
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
        return new AhorroH(cuenta,nombreBanco,nombre,saldo);
}


ManejodeCuentas::~ManejodeCuentas()
{
    delete ui;
}
