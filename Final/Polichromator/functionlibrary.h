#ifndef FUNCTIONLIBRARY_H
#define FUNCTIONLIBRARY_H

#include "spectrum.h"

#include <QScrollArea>

namespace Ui {
class FunctionLibrary;
}

class FunctionLibrary : public QScrollArea
{
    Q_OBJECT

public:
    explicit FunctionLibrary(QWidget *parent = 0);
    ~FunctionLibrary();

    void addEmpty(Spectrum templateSpectrum, QString name);
    void createBasicFunction(Spectrum templateSpectrum);

private:
    Ui::FunctionLibrary *ui;
};

#endif // FUNCTIONLIBRARY_H
