#include "dialog.h"
#include "ui_dialog.h"

#include <QDebug>

#include "spectrum.h"
#include "cmath"

#include "expparser.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // -----------------
    Spectrum basicSpectrum = Spectrum(0, 10, 0.05);

    // -----------------

    ExpParser *gauss1 = new ExpParser("1,7*exp( -( (x-7)^2 / (1/2) ) )");
    ExpParser *gauss2 = new ExpParser("1*exp( -( (x-5)^2 / (2*1*1) ) )");

    Spectrum sg1 = Spectrum(gauss1, basicSpectrum);
    Spectrum sg2 = Spectrum(gauss2, basicSpectrum);


    //sg1=sg2;
    qDebug() << "pre";
    Spectrum sg3=sg1;
    sg3+=sg2;

    //Spectrum sg3 = sg2;



    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(sg1.x,sg1.y);
    ui->widget->graph(1)->setData(sg2.x, sg2.y);
    ui->widget->graph(2)->setData(sg3.x, sg3.y);
    ui->widget->xAxis->setRange(sg2.start, sg2.stop);
    ui->widget->yAxis->setRange(0, 2);


    /*
    qDebug() << "----------------------------------";

    QVector<double> vec = QVector<double>(5);
    qDebug() << vec;
    for(int i=0; i<5; i++)
        vec[i]=i;

    qDebug() << vec;
    QVector<double> cvec = vec;

    for(int i=0; i<5; i++)
        vec[i]=-5+i;

    qDebug() << "vec:" << vec;
    qDebug() << "cvec:" << cvec;
    */


    delete gauss1;
    delete gauss2;
}

Dialog::~Dialog()
{
    delete ui;
}
