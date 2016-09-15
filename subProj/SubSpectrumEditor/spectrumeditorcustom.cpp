#include "spectrumeditorcustom.h"
#include "ui_spectrumeditorcustom.h"

#include "spectrumeditorcustomitem.h"

SpectrumEditorCustom::SpectrumEditorCustom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustom)
{
    ui->setupUi(this);
}

SpectrumEditorCustom::~SpectrumEditorCustom()
{
    delete ui;
}

void SpectrumEditorCustom::on_buttonAddFunction_clicked()
{
    SpectrumEditorCustomItem *specItem = new SpectrumEditorCustomItem(this);
    ui->verticalLayoutFunctions->addWidget(specItem);
    connect(specItem, SIGNAL(deleteRequest(SpectrumEditorCustomItem*)),
            this, SLOT(deleteItem(SpectrumEditorCustomItem*)));
}

void SpectrumEditorCustom::deleteItem(SpectrumEditorCustomItem *item)
{
    QList<SpectrumEditorCustomItem *> itemList = this->findChildren<SpectrumEditorCustomItem *>();

    foreach (SpectrumEditorCustomItem *item_ptr, itemList) {
        if(item_ptr == item)
        {
            item->deleteLater();
            break;
        }
    }
}
