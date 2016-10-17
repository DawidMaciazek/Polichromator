#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "functionlibrary.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(new FunctionLibrary(this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
