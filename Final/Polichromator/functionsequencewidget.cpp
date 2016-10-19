#include "functionsequencewidget.h"
#include "ui_functionsequencewidget.h"

FunctionSequenceWidget::FunctionSequenceWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionSequenceWidget)
{
    ui->setupUi(this);
}

FunctionSequenceWidget::FunctionSequenceWidget(QWidget *parent, Spectrum spectrum) :
    QWidget(parent),
    spectrum(spectrum),
    ui(new Ui::FunctionSequenceWidget)
{
    ui->setupUi(this);

    qDebug() << "function seq";

    ui->plot->addGraph();
    ui->plot->xAxis->setRange(spectrum.start, spectrum.stop);
    ui->plot->graph(0)->setData(spectrum.x, spectrum.y);
}

FunctionSequenceWidget::~FunctionSequenceWidget()
{
    delete ui;
}

const DraggableCustomPlot *FunctionSequenceWidget::getPlot()
{
    return ui->plot;
}
