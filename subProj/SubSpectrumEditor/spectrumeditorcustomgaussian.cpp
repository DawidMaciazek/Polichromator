#include "spectrumeditorcustomgaussian.h"
#include "ui_spectrumeditorcustomgaussian.h"

SpectrumEditorCustomGaussian::SpectrumEditorCustomGaussian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomGaussian)
{
    ui->setupUi(this);
    ui->lineAmplitude->setValidator( new QDoubleValidator(0.0, qInf(), 10, this) );
    ui->lineMu->setValidator( new QDoubleValidator(-qInf(), qInf(), 10, this) );
    ui->lineSigma->setValidator( new QDoubleValidator(0, qInf(), 10, this) );
}

SpectrumEditorCustomGaussian::~SpectrumEditorCustomGaussian()
{
    delete ui;
}
