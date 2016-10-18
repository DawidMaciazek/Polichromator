#ifndef SPECTRUMEDITOR_H
#define SPECTRUMEDITOR_H

#include <QDialog>

#include "spectrumeditorcustom.h"
#include "spectrum.h"

namespace Ui {
class SpectrumEditor;
}

class SpectrumEditor : public QDialog
{
    Q_OBJECT

public:
    explicit SpectrumEditor(QWidget *parent = 0);
    ~SpectrumEditor();
    Spectrum getSpectrum();

private:
    Ui::SpectrumEditor *ui;

    SpectrumEditorCustom *spectrumEditor;
};

#endif // SPECTRUMEDITOR_H
