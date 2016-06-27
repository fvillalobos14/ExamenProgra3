#ifndef MANEJODECUENTAS_H
#define MANEJODECUENTAS_H

#include <QDialog>
#include "ahorroh.h"
#include "cuentapersonal.h"
#include <fstream>

namespace Ui {
class ManejodeCuentas;
}

class ManejodeCuentas : public QDialog
{
    Q_OBJECT

public:
    explicit ManejodeCuentas(QWidget *parent = 0);
    void addCuentaPersonal(CuentaPersonal cp);
    void addCuentaHijos(AhorroH ahorro);
    CuentaPersonal *leerCuentaPersonal();
    AhorroH *leerCuentaHijo();
    ~ManejodeCuentas();

private slots:
    void on_depositar_clicked();

    void on_depositar2_clicked();

    void on_retirar_clicked();

private:
    Ui::ManejodeCuentas *ui;
    CuentaPersonal *cuentasPersonales;
    AhorroH *cuentasHijos;
};

#endif // MANEJODECUENTAS_H
