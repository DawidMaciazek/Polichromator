#include "functionlibrary.h"
#include "ui_functionlibrary.h"

#include "spectrum.h"

#include "functionlibrarywidget.h"

FunctionLibrary::FunctionLibrary(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::FunctionLibrary)
{
    ui->setupUi(this);
}

FunctionLibrary::~FunctionLibrary()
{
    delete ui;
}

void FunctionLibrary::addEmpty(Spectrum templateSpectrum, QString name)
{

    ui->verticalLayout->addWidget(new FunctionLibraryWidget(templateSpectrum, name, this));
}

void FunctionLibrary::createBasicFunction(Spectrum templateSpectrum)
{
    Spectrum dark = templateSpectrum;
    for(int i = 0; i < dark.y.length(); i++)
        dark.y[i] = 0.0;

    Spectrum bright = templateSpectrum;
    for(int i = 0; i < bright.y.length(); i++)
        bright.y[i] = 1.0;

    ui->verticalLayout->addWidget(new FunctionLibraryWidget(templateSpectrum, "Dark", this));
    ui->verticalLayout->addWidget(new FunctionLibraryWidget(bright, "Bright", this));
}
