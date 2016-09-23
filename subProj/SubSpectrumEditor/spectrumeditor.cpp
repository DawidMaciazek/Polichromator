#include "spectrumeditor.h"
#include "ui_spectrumeditor.h"

#include "spectrumeditorcustom.h"
#include <spectrum.h>

#include <QDebug>

SpectrumEditor::SpectrumEditor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpectrumEditor)
{
    ui->setupUi(this);
    spectrumEditor = new SpectrumEditorCustom(Spectrum(10,100,1), this);
    ui->gridLayout->addWidget(spectrumEditor,0,0);
}

SpectrumEditor::~SpectrumEditor()
{
    delete ui;
}

Spectrum SpectrumEditor::getSpectrum()
{
    qDebug() << "return spectrummm";
    return spectrumEditor->combinedSpectrum;
}
