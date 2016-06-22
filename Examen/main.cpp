#include "mainwindow.h"
#include "principal.h"
#include <QApplication>
#include "cuenta.h"
#include "ahorroh.h"
#include "cuentapersonal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    AhorroH *aHijos = new AhorroH(213,"Banpais",2500);
    CuentaPersonal *cp = new CuentaPersonal(214,"Banco Atlantida",2500);

    aHijos->depositar(299);
    cp->retirar(1800);

    QApplication a(argc, argv);
    Principal w;
    w.show();

    return a.exec();
}
