#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QLocale>
#include "spectrumeditor.h"
#include "spectrum.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    SpectrumEditor *spec = new SpectrumEditor(this);
    spec->exec();
    Spectrum sp = spec->getSpectrum();
    qDebug() << sp.size << sp.stop << sp.x << sp.x.size();
    qDebug() << sp.size << sp.stop << sp.y << sp.y.size();
    ui->plot->addGraph();
    ui->plot->xAxis->setRange(sp.x[0], sp.x[sp.size-1]);
    ui->plot->graph(0)->setData(sp.x, sp.y);
    ui->plot->replot();
    qDebug() << "WE ARE BACK NOW!";
}
