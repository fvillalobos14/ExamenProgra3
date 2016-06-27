#include "cuenta.h"

Cuenta::Cuenta()
{

}

void Cuenta::depositar(double money){
    saldo += money;
    cout<<"Saldo: "<<saldo<<endl;
}

double Cuenta::getSaldo(){
    return saldo;
}

void Cuenta::setSaldo(double mon){
    saldo = mon;
}

void Cuenta::retirar(double money){
    saldo-=money;
    cout<<"Saldo de una Cuenta Padre: "<<saldo<<endl;
}
string Cuenta::getNombre(){
    return nombre;
}

string Cuenta::getNombreBanco(){
    return nombreDelBanco;
}

int Cuenta::getCuenta(){
    return numeroCuenta;
}

