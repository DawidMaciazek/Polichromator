#ifndef SPECTRUMEDITOR_H
#define SPECTRUMEDITOR_H

#include <QWidget>

#include "spectrum.h"

namespace Ui {
class SpectrumEditor;
}

class SpectrumEditor : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditor(Spectrum templateSpectrum,  QWidget *parent = 0);
    ~SpectrumEditor();

private:
    Ui::SpectrumEditor *ui;
    Spectrum templateSpectrum;
};

#endif // SPECTRUMEDITOR_H
