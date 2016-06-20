#include "ahorroh.h"

AhorroH::AhorroH(int n, string nom, string nomB, double sal)
{
    numeroCuenta = n;
    nombre = nom;
    nombreDelBanco = nomB;
    saldo = sal;
}

void AhorroH::retirar(){
    cout<<"Esta funcion no es aplicable en esta cuenta."<<endl;
}
