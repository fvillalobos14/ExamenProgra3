#include "simplecalculator.h"
#include "ui_simplecalculator.h"
#include <QMessageBox>

SimpleCalculator::SimpleCalculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimpleCalculator)
{
    ui->setupUi(this);
}

SimpleCalculator::~SimpleCalculator()
{
    delete ui;
}

double SimpleCalculator:: factorial(double n)
{
    //double factorial;
    if (n==0)
        return 1;
    else
         return n*(factorial(n-1));
}

void SimpleCalculator::on_SumButton_clicked()
{
    double first, second ,third, fourth, result;
    if(ui->firstEdit->text().isEmpty()){
       first = 0;
    }else{
      first=ui->firstEdit->text().toDouble();
    }

    if(ui->secondEdit->text().isEmpty()){
       second = 0;
    }else{
      second = ui->secondEdit->text().toDouble();
    }

    if(ui->thirdEdit->text().isEmpty()){
       third = 0;
    }else{
      third=ui->thirdEdit->text().toDouble();
    }

    if(ui->fourthEdit->text().isEmpty()){
       fourth = 0;
    }else{
      fourth=ui->fourthEdit->text().toDouble();
    }

    result = first + second + third + fourth;

    ui->Result->setText(QString::number(result));
}

void SimpleCalculator::on_MinusButton_clicked()
{
    double first, second ,third, fourth, result;
    if(ui->firstEdit->text().isEmpty()){
       first = 0;
    }else{
      first=ui->firstEdit->text().toDouble();
    }

    if(ui->secondEdit->text().isEmpty()){
       second = 0;
    }else{
      second = ui->secondEdit->text().toDouble();
    }

    if(ui->thirdEdit->text().isEmpty()){
       third = 0;
    }else{
      third=ui->thirdEdit->text().toDouble();
    }

    if(ui->fourthEdit->text().isEmpty()){
       fourth = 0;
    }else{
      fourth=ui->fourthEdit->text().toDouble();
    }

    result = first - second - third - fourth;

    ui->Result->setText(QString::number(result));
}

void SimpleCalculator::on_MultipyButton_clicked()
{
    double first, second ,third, fourth, result;
    if(ui->firstEdit->text().isEmpty()){
       first = 1;
    }else{
      first=ui->firstEdit->text().toDouble();
    }

    if(ui->secondEdit->text().isEmpty()){
       second = 1;
    }else{
      second = ui->secondEdit->text().toDouble();
    }

    if(ui->thirdEdit->text().isEmpty()){
       third = 1;
    }else{
      third=ui->thirdEdit->text().toDouble();
    }

    if(ui->fourthEdit->text().isEmpty()){
       fourth = 1;
    }else{
      fourth=ui->fourthEdit->text().toDouble();
    }

    result = first * second * third * fourth;

    ui->Result->setText(QString::number(result));
}

void SimpleCalculator::on_pushButton_clicked()
{
    double first, second ,third, fourth, result;
    if(ui->firstEdit->text().isEmpty()){
       first = 1;
    }else{
      first=ui->firstEdit->text().toDouble();
    }

    if(ui->secondEdit->text().isEmpty()){
       second = 1;
    }else{
      second = ui->secondEdit->text().toDouble();
    }

    if(ui->thirdEdit->text().isEmpty()){
       third = 1;
    }else{
      third=ui->thirdEdit->text().toDouble();
    }

    if(ui->fourthEdit->text().isEmpty()){
       fourth = 1;
    }else{
      fourth=ui->fourthEdit->text().toDouble();
    }

    result = first / second / third / fourth;

    if(first == 0 || second == 0 || third == 0 || fourth == 0){
        result = 0;
    }

    ui->Result->setText(QString::number(result));
}


void SimpleCalculator::on_AverageButton_clicked()
{
    double first, second ,third, fourth, suma, counter = 0, result;
    if(ui->firstEdit->text().isEmpty()){
       first = 0;
    }else{
      first=ui->firstEdit->text().toDouble();
      counter++;
    }

    if(ui->secondEdit->text().isEmpty()){
       second = 0;
    }else{
      second = ui->secondEdit->text().toDouble();
      counter++;
    }

    if(ui->thirdEdit->text().isEmpty()){
       third = 0;
    }else{
      third=ui->thirdEdit->text().toDouble();
      counter++;
    }

    if(ui->fourthEdit->text().isEmpty()){
       fourth = 0;
    }else{
      fourth=ui->fourthEdit->text().toDouble();
      counter++;
    }
    suma = first + second + third + fourth;
    result = suma /counter;
    ui->Result->setText(QString::number(result));
}


void SimpleCalculator::on_FactorialButton_clicked()
{

}

void SimpleCalculator::on_actionInstructions_triggered()
{
    QMessageBox::information(this,"Instructions",
    "All functions except factorial can use the maximum amount of values. \nFactorial can only be done with a single value. \nIf something other than a number is introduced, an error will occur. \nFor division, if more than two values are introduced, the order of division will  be: first / second / third /fourth. ");
}

void SimpleCalculator::on_actionGo_Back_triggered()
{
    this->setVisible(false);
}

void SimpleCalculator::on_actionExit_triggered()
{
     QCoreApplication::quit();
}

void SimpleCalculator::on_AverageButton_2_clicked()
{
    QString valor1 = ui->firstEdit->text();
    double v1 = valor1.split(" ")[0].toDouble();
    double factorialn = factorial(v1);
    QString factResult = QString::number(factorialn);
    ui->Result->setText(factResult);
}
