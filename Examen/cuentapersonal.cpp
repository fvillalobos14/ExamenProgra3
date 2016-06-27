#include "cuentapersonal.h"

CuentaPersonal::CuentaPersonal(int n, string nomB, string nom, double sal)
{
    this->numeroCuenta = n;
    this->nombreDelBanco = nomB;
    this->saldo = sal;
    nombre = nom;
}

void CuentaPersonal::retirar(double money){
    saldo -= money;
    cout<<"Saldo actual: "<<saldo<<endl;
}



