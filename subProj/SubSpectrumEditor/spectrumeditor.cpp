#include "spectrumeditor.h"
#include "ui_spectrumeditor.h"

#include "spectrumeditorcustom.h"

SpectrumEditor::SpectrumEditor(Spectrum templateSpectrum, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditor),
    templateSpectrum(templateSpectrum)
{
    ui->setupUi(this);
    ui->gridLayout->addWidget(new SpectrumEditorCustom(templateSpectrum, this),0,0);
    ui->gridLayout->addWidget(new SpectrumEditorCustom(templateSpectrum, this),1,0);
}

SpectrumEditor::~SpectrumEditor()
{
    delete ui;
}
