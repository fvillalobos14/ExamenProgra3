#ifndef SIMPLECALCULATOR_H
#define SIMPLECALCULATOR_H

#include <QMainWindow>
#include <iostream>

using namespace std;

namespace Ui {
class SimpleCalculator;
}

class SimpleCalculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimpleCalculator(QWidget *parent = 0);
    double factorial(double);
    ~SimpleCalculator();

private slots:
    void on_SumButton_clicked();

    void on_MinusButton_clicked();

    void on_MultipyButton_clicked();

    void on_pushButton_clicked();

    void on_AverageButton_clicked();

    void on_FactorialButton_clicked();

    void on_actionInstructions_triggered();

    void on_actionGo_Back_triggered();

    void on_actionExit_triggered();

private:
    Ui::SimpleCalculator *ui;
};

#endif // SIMPLECALCULATOR_H
