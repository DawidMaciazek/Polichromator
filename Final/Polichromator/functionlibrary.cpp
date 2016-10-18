#include "functionlibrary.h"
#include "ui_functionlibrary.h"

#include "functionlibrarywidget.h"

FunctionLibrary::FunctionLibrary(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::FunctionLibrary)
{
    ui->setupUi(this);
    ui->verticalLayout->addWidget(new FunctionLibraryWidget(this));
}

FunctionLibrary::~FunctionLibrary()
{
    delete ui;
}
