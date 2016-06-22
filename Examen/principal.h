#ifndef PRINCIPAL_H
#define PRINCIPAL_H
#include "simplecalculator.h"
#include "mainwindow.h"
#include "notepad.h"


#include <QMainWindow>

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    SimpleCalculator sc;
    Notepad npd;
    MainWindow w;
    ~Principal();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
