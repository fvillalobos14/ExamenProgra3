#include "cuentapersonal.h"

CuentaPersonal::CuentaPersonal(int n, string nomB, double sal)
{
    this->numeroCuenta = n;
    this->nombreDelBanco = nomB;
    this->saldo = sal;
}

void CuentaPersonal::retirar(double money){
    saldo -= money;
    cout<<"Saldo actual: "<<saldo<<endl;
}



