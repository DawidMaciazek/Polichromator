#include "functionlibraryitem.h"
#include "ui_functionlibraryitem.h"

FunctionLibraryItem::FunctionLibraryItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FunctionLibraryItem)
{
    ui->setupUi(this);
}

FunctionLibraryItem::~FunctionLibraryItem()
{
    delete ui;
}
