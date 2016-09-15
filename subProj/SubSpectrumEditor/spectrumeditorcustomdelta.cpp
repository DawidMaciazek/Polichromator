#include "spectrumeditorcustomdelta.h"
#include "ui_spectrumeditorcustomdelta.h"

SpectrumEditorCustomDelta::SpectrumEditorCustomDelta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomDelta)
{
    ui->setupUi(this);

    ui->lineAmplitude->setValidator( new QDoubleValidator(0.0, qInf(), 10, this) );
    ui->lineStart->setValidator( new QDoubleValidator(-qInf(), qInf(), 10, this) );
    ui->lineWidth->setValidator( new QDoubleValidator(0.0, qInf(), 10, this) );
}

SpectrumEditorCustomDelta::~SpectrumEditorCustomDelta()
{
    delete ui;
}
