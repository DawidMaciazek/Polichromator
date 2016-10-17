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
    reduction = "-1";


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "pressed widgett";
}

void Dialog::on_pushButton_clicked()
{
    // -----------------
    Spectrum basicSpectrum = Spectrum(0, 10, 0.1);
    qDebug() << basicSpectrum.x;

    // -----------------
    qDebug() << ui->widget->graphCount();
    ui->widget->clearGraphs();
    qDebug() << ui->widget->graphCount();

    ExpParser *gauss1 = new ExpParser("1,7*exp( -( (x-7)^2 / (1/2) ) )");
    ExpParser *gauss2 = new ExpParser("1*exp( -( (x" + reduction + ")^2 / (2*1*1) ) )");
    ExpParser *gauss3 = new ExpParser("(  (1+(abs(x-1))/(x-1))*(1-(abs(x-1))/(x-1)  )  )/4");
    reduction += "-1";

    Spectrum sg1 = Spectrum(gauss1, basicSpectrum);
    Spectrum sg2 = Spectrum(gauss2, basicSpectrum);
    Spectrum sg3 = Spectrum(gauss3, basicSpectrum);


    //sg1=sg2;
    Spectrum sg4=sg1;
    sg4*=sg2;
    sg4+=sg3;

    //Spectrum sg3 = sg2;



    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->addGraph();
    ui->widget->graph(3)->setPen(QColor(255, 0 ,0));

    ui->widget->graph(0)->setData(sg1.x,sg1.y);
    ui->widget->graph(1)->setData(sg2.x, sg2.y);
    ui->widget->graph(2)->setData(sg3.x, sg3.y);
    ui->widget->graph(3)->setData(sg4.x, sg4.y);
    ui->widget->xAxis->setRange(sg1.start, sg1.stop);
    ui->widget->yAxis->setRange(0, 2);
    ui->widget->replot();


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
    delete gauss3;
}
