#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    int size = 100;

    QVector<double> x(size), y(size);

    for (int i = 0; i < size; i++)
    {
        x[i] = i;
        y[i] = i*11.2 * i/(i*i+60);
    }


    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x,y);
    ui->widget->xAxis->setRange(0, size);
    ui->widget->yAxis->setRange(0, 1000.0);
}

Dialog::~Dialog()
{
    delete ui;
}
