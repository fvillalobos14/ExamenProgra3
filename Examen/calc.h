#ifndef CALC_H
#define CALC_H

#include <QWidget>

namespace Ui {
class Calc;
}

class Calc : public QWidget
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = 0);
    ~Calc();

private:
    Ui::Calc *ui;
};

#endif // CALC_H
