#include "functionlibrarywidget.h"
#include "ui_functionlibrarywidget.h"

#include "spectrum.h"
#include "spectrumeditorcustom.h"

#include <QMessageBox>

FunctionLibraryWidget::FunctionLibraryWidget(Spectrum templateSpectrum, QString name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionLibraryWidget),
    name(name)
{
    ui->setupUi(this);
    spectrum = templateSpectrum;
    ui->plot->setSpectrum(spectrum);
    ui->plot->setName(name);
    ui->labelName->setText(name);
}

FunctionLibraryWidget::~FunctionLibraryWidget()
{
    delete ui;
}

void FunctionLibraryWidget::on_buttonEdit_clicked()
{
    SpectrumEditorCustom *spectrumEditor = new SpectrumEditorCustom(spectrum, this);
    spectrumEditor->exec();
    Spectrum spectrum = spectrumEditor->getSpectrum();

    ui->plot->setSpectrum(spectrum);
}

void FunctionLibraryWidget::on_deleteButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Delete function", "Do you really want to delete this function from library?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes)
        this->deleteLater();
}
