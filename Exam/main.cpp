#include "principal.h"
#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Principal w;
    w.show();

    return a.exec();
}
