#include "spectrumeditorcustomgaussian.h"
#include "ui_spectrumeditorcustomgaussian.h"

#include <QDebug>
#include <QDoubleValidator>

SpectrumEditorCustomGaussian::SpectrumEditorCustomGaussian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomGaussian)
{
    ui->setupUi(this);

    ui->lineAmplitude->setValidator( new QDoubleValidator(0, qInf(), 10, this) );
    ui->lineMu->setValidator( new QDoubleValidator(-qInf(), qInf(), 10, this) );
    ui->lineSigma->setValidator( new QDoubleValidator(0, qInf(), 10, this) );
}

SpectrumEditorCustomGaussian::~SpectrumEditorCustomGaussian()
{
    delete ui;
}

void SpectrumEditorCustomGaussian::on_lineAmplitude_textChanged(const QString &arg1)
{
    amplitudeFlag = true;
    validateInput();
}

void SpectrumEditorCustomGaussian::on_lineMu_textChanged(const QString &arg1)
{
    muFlag = true;
    validateInput();
}

void SpectrumEditorCustomGaussian::on_lineSigma_textChanged(const QString &arg1)
{
    sigmaFlag = true;
    validateInput();
}

void SpectrumEditorCustomGaussian::validateInput()
{
    if( !(amplitudeFlag && muFlag && sigmaFlag) )
        return;
    QString expression = QString("");
    expression += ui->lineAmplitude->text();
    expression += QString("*exp( -( (x-");
    expression += ui->lineMu->text();
    expression += QString(")^2 )/(2*");
    expression += ui->lineSigma->text();
    expression += QString("^2) )");

    emit functionUpdateRequest(new ExpParser(expression));
}
