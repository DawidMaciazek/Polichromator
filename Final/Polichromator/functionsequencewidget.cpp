#include "functionsequencewidget.h"
#include "ui_functionsequencewidget.h"

FunctionSequenceWidget::FunctionSequenceWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionSequenceWidget)
{
    ui->setupUi(this);
}

FunctionSequenceWidget::~FunctionSequenceWidget()
{
    delete ui;
}

const DraggableCustomPlot *FunctionSequenceWidget::getPlot()
{
    return ui->plot;
}
