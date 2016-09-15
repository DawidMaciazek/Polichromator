#include "spectrumeditorcustomcfunction.h"
#include "ui_spectrumeditorcustomcfunction.h"

SpectrumEditorCustomCFunction::SpectrumEditorCustomCFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomCFunction)
{
    ui->setupUi(this);
}

SpectrumEditorCustomCFunction::~SpectrumEditorCustomCFunction()
{
    delete ui;
}
