#include "spectrumeditorcustomdelta.h"
#include "ui_spectrumeditorcustomdelta.h"

#include <QDebug>

SpectrumEditorCustomDelta::SpectrumEditorCustomDelta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomDelta)
{
    ui->setupUi(this);

    ui->lineAmplitude->setValidator( new QDoubleValidator(0.0, qInf(), 10, this) );
    ui->lineStart->setValidator( new QDoubleValidator(-qInf(), qInf(), 10, this) );
    ui->lineWidth->setValidator( new QDoubleValidator(0.0, qInf(), 10, this) );

    amplitudeFlag = false;
    widthFlag = false;
    startFlag = false;
}

SpectrumEditorCustomDelta::~SpectrumEditorCustomDelta()
{
    delete ui;
}

void SpectrumEditorCustomDelta::on_lineAmplitude_textChanged(const QString &arg1)
{
    amplitudeFlag = true;
    validateInput();
}

void SpectrumEditorCustomDelta::on_lineStart_textChanged(const QString &arg1)
{
    startFlag = true;
    validateInput();
}

void SpectrumEditorCustomDelta::on_lineWidth_textEdited(const QString &arg1)
{
    widthFlag = true;
    validateInput();
}

void SpectrumEditorCustomDelta::validateInput()
{
    if( ! (amplitudeFlag && startFlag && widthFlag) )
        return;
}
