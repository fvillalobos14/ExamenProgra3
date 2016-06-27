#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>

using namespace std;

class Cuenta{
protected:
    //int numeroCuenta;
    string nombreDelBanco, nombre;
    //double saldo;
public:
    Cuenta();
    string getNombre();
    double getSaldo();
    string getNombreBanco();
    int getCuenta();
    double saldo;
    int numeroCuenta;
    void setSaldo(double);
    void depositar(double);
    virtual void retirar(double) = 0;
};

#endif // CUENTA_H
