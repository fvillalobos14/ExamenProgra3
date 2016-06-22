#ifndef MANEJODECUENTAS_H
#define MANEJODECUENTAS_H

#include <QDialog>
#include "ahorroh.h"
#include "cuentapersonal.h"

namespace Ui {
class ManejodeCuentas;
}

class ManejodeCuentas : public QDialog
{
    Q_OBJECT

public:
    explicit ManejodeCuentas(QWidget *parent = 0);
    void addCuentaPersonal(CuentaPersonal cp, int pos);
    void addCuentaHijos(AhorroH ahorro);
    ~ManejodeCuentas();

private:
    Ui::ManejodeCuentas *ui;
    CuentaPersonal *cuentasPersonales;
    AhorroH *cuentasHijos;
};

#endif // MANEJODECUENTAS_H
