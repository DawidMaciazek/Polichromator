#include "spectrumeditorcustom.h"
#include "ui_spectrumeditorcustom.h"

#include "spectrumeditorcustomitem.h"

#include <QDebug>

SpectrumEditorCustom::SpectrumEditorCustom(Spectrum templateSpectrum, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpectrumEditorCustom),
    templateSpectrum(templateSpectrum),
    combinedSpectrum(templateSpectrum)
{
    ui->setupUi(this);

    initializePlot();

    ui->comboMerge->addItem("Envelope");
    ui->comboMerge->addItem("Addition");
    ui->comboMerge->addItem("Multiplication");
}

SpectrumEditorCustom::~SpectrumEditorCustom()
{
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();

    foreach (SpectrumEditorCustomItem *item, itemList)
        item->deleteLater();
    delete ui;
}

Spectrum SpectrumEditorCustom::getSpectrum()
{
    return combinedSpectrum;
}

void SpectrumEditorCustom::initializePlot()
{
    ui->plot->xAxis->setRange(templateSpectrum.start, templateSpectrum.stop);
}

void SpectrumEditorCustom::updatePlot()
{
    ui->plot->clearGraphs();
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();

    combinedSpectrum = templateSpectrum;
    int itemCnt = 0;
    foreach (SpectrumEditorCustomItem *item, itemList) {
        Spectrum spectrum = item->getSpectrum();
        if(spectrum.valid)
        {
            ui->plot->addGraph();
            ui->plot->graph(itemCnt)->setData(spectrum.x, spectrum.y);

            if(itemCnt == 0)
            {
                combinedSpectrum = spectrum;
            }
            else
            {
                int currentIndex = ui->comboMerge->currentIndex();
                if(currentIndex == 0)
                {
                    combinedSpectrum.envelope(spectrum);
                }
                else if(currentIndex == 1)
                {
                    combinedSpectrum += spectrum;
                }
                else
                {
                    combinedSpectrum *= spectrum;
                }
            }
            itemCnt++;
        }
    }
    if(itemCnt > 0)
    {
        ui->plot->addGraph();
        ui->plot->graph(itemCnt)->setData(combinedSpectrum.x, combinedSpectrum.y);
        ui->plot->graph(itemCnt)->setPen(QPen(Qt::red));
    }
    ui->plot->replot();
}

void SpectrumEditorCustom::on_buttonAddFunction_clicked()
{
    SpectrumEditorCustomItem *specItem = new SpectrumEditorCustomItem(templateSpectrum, this);

    ui->verticalLayoutFunctions->addWidget(specItem);

    connect(specItem, SIGNAL(deleteRequest(SpectrumEditorCustomItem*)),
            this, SLOT(deleteItemSlot(SpectrumEditorCustomItem*)));

    connect(specItem, SIGNAL(updateRequest()),
            this, SLOT(updatePlotSlot()));
}

void SpectrumEditorCustom::deleteItemSlot(SpectrumEditorCustomItem *item)
{
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();

    foreach (SpectrumEditorCustomItem *item_ptr, itemList) {
        if(item_ptr == item)
        {
            item->deleteLater();
            break;
        }
    }
    updatePlot();
}

void SpectrumEditorCustom::updatePlotSlot()
{
    updatePlot();
}

void SpectrumEditorCustom::on_comboMerge_currentIndexChanged(int index)
{
    updatePlot();
}
