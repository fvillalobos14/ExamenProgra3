#ifndef AHORROH_H
#define AHORROH_H
#include "cuenta.h"
#include <iostream>

using namespace std;

class AhorroH : public Cuenta{
public:
    AhorroH(int, string, string, double);
    void retirar();
};

#endif // AHORROH_H
