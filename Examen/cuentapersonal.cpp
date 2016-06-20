#include "cuentapersonal.h"

CuentaPersonal::CuentaPersonal(int n, string nom, string nomB, double sal)
{
    this->numeroCuenta = n;
    this->nombre = nom;
    this->nombreDelBanco = nomB;
    this->saldo = sal;
}

void CuentaPersonal::retirar(double money){
    saldo -= money;
    cout<<"Saldo actual: "<<saldo<<endl;
}



