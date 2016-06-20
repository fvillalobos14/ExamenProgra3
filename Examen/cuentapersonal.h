#ifndef CUENTAPERSONAL_H
#define CUENTAPERSONAL_H
#include "cuenta.h"
#include <iostream>

using namespace std;

class CuentaPersonal : public Cuenta{
public:
    CuentaPersonal(int, string, string, double);
    void retirar(double);
};

#endif // CUENTAPERSONAL_H
