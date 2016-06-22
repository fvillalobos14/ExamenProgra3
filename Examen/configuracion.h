#ifndef CONFIGURACION_H
#define CONFIGURACION_H

#include <QDialog>
#include "cuentapersonal.h"
#include "manejodecuentas.h"

namespace Ui {
class Configuracion;
}

class Configuracion : public QDialog
{
    Q_OBJECT

public:
    explicit Configuracion(QWidget *parent = 0);
    ~Configuracion();

private slots:
    void on_start_clicked();

private:
    Ui::Configuracion *ui;
};

#endif // CONFIGURACION_H
