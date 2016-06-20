#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QMainWindow>

namespace Ui {
class Calculadora;
}

class Calculadora : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = 0);
    ~Calculadora();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
