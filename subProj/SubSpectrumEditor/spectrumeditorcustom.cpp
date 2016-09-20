#include "spectrumeditorcustom.h"
#include "ui_spectrumeditorcustom.h"

#include "spectrumeditorcustomitem.h"

#include <QDebug>

SpectrumEditorCustom::SpectrumEditorCustom(Spectrum templateSpectrum, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustom),
    templateSpectrum(templateSpectrum)
{
    ui->setupUi(this);
    initializePlot();
}

SpectrumEditorCustom::~SpectrumEditorCustom()
{
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();

    foreach (SpectrumEditorCustomItem *item, itemList)
        item->deleteLater();
    delete ui;
}

void SpectrumEditorCustom::initializePlot()
{
    ui->plot->xAxis->setRange(templateSpectrum.start, templateSpectrum.stop);
}

void SpectrumEditorCustom::updatePlot()
{
    ui->plot->clearGraphs();
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();
    int itemCnt = 0;
    foreach (SpectrumEditorCustomItem *item, itemList) {
        Spectrum spectrum = item->getSpectrum();
        ui->plot->addGraph();
        ui->plot->graph(itemCnt)->setData(spectrum.x, spectrum.y);
        itemCnt++;
        qDebug() << "GRAPH ADDED!";
    }
    ui->plot->replot();
}

void SpectrumEditorCustom::on_buttonAddFunction_clicked()
{
    SpectrumEditorCustomItem *specItem = new SpectrumEditorCustomItem(templateSpectrum, this);
    // deleted in SpectrumEditorCustom::deleteItem() on demand

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
    qDebug() << "NOW deletion request !";
    updatePlot();
}

void SpectrumEditorCustom::updatePlotSlot()
{
    qDebug() << "plot update request catched...";
    updatePlot();
}
