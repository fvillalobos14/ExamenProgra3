#ifndef CUENTA_H
#define CUENTA_H

#include <iostream>

using namespace std;

class Cuenta{
protected:
    int numeroCuenta;
    string nombre, nombreDelBanco;
    double saldo;
public:
    Cuenta();
    double getSaldo();
    void setSaldo(double);
    void depositar(double);
    virtual void retirar(double);
};

#endif // CUENTA_H
