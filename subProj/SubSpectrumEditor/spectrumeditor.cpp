#include "spectrumeditor.h"
#include "ui_spectrumeditor.h"

#include "spectrumeditorcustom.h"

SpectrumEditor::SpectrumEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditor)
{
    ui->setupUi(this);
    ui->gridLayout->addWidget(new SpectrumEditorCustom(this),0,0);
    ui->gridLayout->addWidget(new SpectrumEditorCustom(this),1,0);
}

SpectrumEditor::~SpectrumEditor()
{
    delete ui;
}
