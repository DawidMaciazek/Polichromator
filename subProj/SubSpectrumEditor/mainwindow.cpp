#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLocale>
#include "spectrumeditor.h"
#include "spectrum.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(new SpectrumEditor(Spectrum(0,10,0.05), this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
