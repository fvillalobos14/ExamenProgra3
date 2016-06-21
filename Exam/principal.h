#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "notepad.h"
#include "simplecalculator.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    Notepad npd;
    SimpleCalculator sc;
    double average(double first, double second, double third, double fourth);
    ~Principal();

private slots:
    void on_NotepadButton_clicked();

    void on_CalcButton_clicked();

    void on_BankButton_clicked();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
