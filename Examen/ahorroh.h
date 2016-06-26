#ifndef AHORROH_H
#define AHORROH_H
#include "cuenta.h"
#include <iostream>
#include <QMessageBox>

using namespace std;

class AhorroH : public Cuenta{
public:
    AhorroH(int, string, double);
    void retirar(double);
};

#endif // AHORROH_H
