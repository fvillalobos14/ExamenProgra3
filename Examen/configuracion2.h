#ifndef CONFIGURACION2_H
#define CONFIGURACION2_H

#include <QDialog>
#include "ahorroh.h"
#include "manejodecuentas.h"

namespace Ui {
class configuracion2;
}

class configuracion2 : public QDialog
{
    Q_OBJECT

public:
    explicit configuracion2(QWidget *parent = 0);
    ~configuracion2();

private slots:
    void on_start_clicked();

private:
    Ui::configuracion2 *ui;
};

#endif // CONFIGURACION2_H
