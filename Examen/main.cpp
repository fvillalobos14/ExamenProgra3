#include "mainwindow.h"
#include <QApplication>
#include "cuenta.h"
#include "ahorroh.h"
#include "cuentapersonal.h"
#include <iostream>

using namespace std;

int main(){
    AhorroH *aHijos = new AhorroH(213,"Francis","Banpais",2500);
    CuentaPersonal *cp = new CuentaPersonal(214,"Diana","Banco Atlantida",2500);

    aHijos->depositar(299);
    cp->retirar(1800);
}

/*(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}*/
