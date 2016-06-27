#include "mainwindow.h"
#include "principal.h"
#include <QApplication>
#include "cuenta.h"
#include "ahorroh.h"
#include "cuentapersonal.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();

    return a.exec();
}
