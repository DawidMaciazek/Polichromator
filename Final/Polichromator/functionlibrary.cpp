#include "functionlibrary.h"
#include "ui_functionlibrary.h"

#include "functionlibraryitem.h"

FunctionLibrary::FunctionLibrary(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::FunctionLibrary)
{
    ui->setupUi(this);
    ui->verticalLayout->addWidget(new FunctionLibraryItem(this));
}

FunctionLibrary::~FunctionLibrary()
{
    delete ui;
}
