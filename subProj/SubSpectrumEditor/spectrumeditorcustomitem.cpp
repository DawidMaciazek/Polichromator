#include "spectrumeditorcustomitem.h"
#include "ui_spectrumeditorcustomitem.h"
#include <QDebug>

#include "spectrum.h"
#include "spectrumeditorcustomgaussian.h"
#include "spectrumeditorcustomdelta.h"
#include "spectrumeditorcustomcfunction.h"


SpectrumEditorCustomItem::SpectrumEditorCustomItem(Spectrum templateSpectrum, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomItem),
    templateSpectrum(templateSpectrum)
{
    ui->setupUi(this);

    spectrum = templateSpectrum;
    spectrumIsCurrent = false;
    isInitialized = false;
    layoutInsertPosition = 1;

    functionList << "Gaussian" << "Delta" << "Custom";
    foreach (QString functionName, functionList) {
       ui->comboFunction->addItem(functionName);
    }
}

SpectrumEditorCustomItem::~SpectrumEditorCustomItem()
{
    delete ui;
}

Spectrum SpectrumEditorCustomItem::getSpectrum()
{
    return spectrum;
}

void SpectrumEditorCustomItem::on_toolButton_clicked()
{
    emit deleteRequest(this);
}

void SpectrumEditorCustomItem::on_comboFunction_currentIndexChanged(const QString &arg1)
{
    spectrumIsCurrent = false;
    if(isInitialized)
    {
       qDebug() << "removing";
       currentDisplay->deleteLater();
    }
    else
    {
       isInitialized = true;
    }

    if(arg1 == functionList[0])
    {
        currentDisplay = new SpectrumEditorCustomGaussian(this);
        connect(qobject_cast<SpectrumEditorCustomGaussian *>(currentDisplay),
                SIGNAL(functionUpdateRequest(ExpParser *)),
                this, SLOT(functionUpdateSlot(ExpParser *)));
    }
    else if(arg1 == functionList[1])
    {
        currentDisplay = new SpectrumEditorCustomDelta(this);

    }
    else
    {
        currentDisplay = new SpectrumEditorCustomCFunction(this);
        connect(qobject_cast<SpectrumEditorCustomCFunction *>(currentDisplay),
                SIGNAL(functionUpdateRequest(ExpParser *)),
                this, SLOT(functionUpdateSlot(ExpParser *)));
    }
    ui->gridLayout->addWidget(currentDisplay, 0, layoutInsertPosition);
}

void SpectrumEditorCustomItem::functionUpdateSlot(ExpParser *parser)
{
    spectrum = Spectrum(parser, templateSpectrum);
    spectrumIsCurrent = true;
    delete parser;

    emit updateRequest();
}
