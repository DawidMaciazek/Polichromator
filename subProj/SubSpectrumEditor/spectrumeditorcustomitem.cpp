#include "spectrumeditorcustomitem.h"
#include "ui_spectrumeditorcustomitem.h"
#include <QDebug>

#include "spectrumeditorcustomgaussian.h"
#include "spectrumeditorcustomdelta.h"
#include "spectrumeditorcustomcfunction.h"

SpectrumEditorCustomItem::SpectrumEditorCustomItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomItem)
{
    ui->setupUi(this);

    isInitialized = false;
    layoutInsert = 1;

    functionList << "Gaussian" << "Delta" << "Custom";
    foreach (QString functionName, functionList) {
       ui->comboFunction->addItem(functionName);
    }
}

SpectrumEditorCustomItem::~SpectrumEditorCustomItem()
{
    delete ui;
}

void SpectrumEditorCustomItem::on_toolButton_clicked()
{
    emit deleteRequest(this);
}

void SpectrumEditorCustomItem::on_comboFunction_currentIndexChanged(const QString &arg1)
{
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
    }
    else if(arg1 == functionList[1])
    {
        currentDisplay = new SpectrumEditorCustomDelta(this);
    }
    else
    {
        currentDisplay = new SpectrumEditorCustomCFunction(this);
    }
    ui->gridLayout->addWidget(currentDisplay, 0, layoutInsert);
}
