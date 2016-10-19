#include "functionlibrarywidget.h"
#include "ui_functionlibrarywidget.h"

#include "spectrum.h"
#include "spectrumeditorcustom.h"

FunctionLibraryWidget::FunctionLibraryWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionLibraryWidget)
{
    ui->setupUi(this);
}

FunctionLibraryWidget::~FunctionLibraryWidget()
{
    delete ui;
}

void FunctionLibraryWidget::on_buttonEdit_clicked()
{
    //SpectrumEditor *spec = new SpectrumEditor(this);
    SpectrumEditorCustom *spec = new SpectrumEditorCustom(Spectrum(0,20,1), this);
    spec->exec();
    Spectrum sp = spec->getSpectrum();
    qDebug() << sp.x;

    ui->plot->setSpectrum(sp);
    ui->plot->addGraph();
    ui->plot->xAxis->setRange(sp.x[0], sp.x[sp.size-1]);
    ui->plot->graph(0)->setData(sp.x, sp.y);
    ui->plot->replot();
}
