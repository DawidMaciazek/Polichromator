#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "spectrumeditor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(new SpectrumEditor(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
