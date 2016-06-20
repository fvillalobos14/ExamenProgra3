#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include "notepad.h"

namespace Ui {
class Principal;
}

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit Principal(QWidget *parent = 0);
    Notepad npd;
    ~Principal();

private slots:
    void on_NotepadButton_clicked();

    void on_CalcButton_clicked();

    void on_BankButton_clicked();

private:
    Ui::Principal *ui;
};

#endif // PRINCIPAL_H
