#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "functionlibrary.h"
#include "spectrum.h"

#include <QDebug>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    templateSpectrum = Spectrum(300, 700, 1);
    ui->functionLibrary->createBasicFunction(templateSpectrum);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Function_triggered()
{
    bool ok;
    QString text = QInputDialog::getText(this,
               "MyApp 3000", "Enter your name:", QLineEdit::Normal,
               QString::null, &ok);

    if ( ok && !text.isEmpty() )
        ui->functionLibrary->addEmpty(templateSpectrum, text);
}
