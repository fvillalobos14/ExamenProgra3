#include "manejodecuentas.h"
#include "ui_manejodecuentas.h"

ManejodeCuentas::ManejodeCuentas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManejodeCuentas)
{
    ui->setupUi(this);
}


void ManejodeCuentas::addCuentaPersonal(CuentaPersonal cp, int pos){
    cuentasPersonales[pos] = cp;
}

void ManejodeCuentas::addCuentaHijos(AhorroH ahorro){
    for(int i=0; i<10;i++){
        if(cuentasHijos[i].getNombre() == "vacio"){
            cuentasHijos[i] = ahorro;
        }
    }
}

ManejodeCuentas::~ManejodeCuentas()
{
    delete ui;
}
