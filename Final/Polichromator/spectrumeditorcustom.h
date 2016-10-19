#ifndef SPECTRUMEDITORCUSTOM_H
#define SPECTRUMEDITORCUSTOM_H

#include <QDialog>

#include "spectrum.h"
#include "spectrumeditorcustomitem.h"
#include "expparser.h"

namespace Ui {
class SpectrumEditorCustom;
}

class SpectrumEditorCustom : public QDialog
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustom(Spectrum templateSpectrum, QWidget *parent = 0);
    ~SpectrumEditorCustom();

    Spectrum getSpectrum();

    void initializePlot();
    void updatePlot();

    Spectrum combinedSpectrum;

private slots:
    void on_buttonAddFunction_clicked();
    void deleteItemSlot(SpectrumEditorCustomItem *item);
    void updatePlotSlot();

    void on_comboMerge_currentIndexChanged(int index);

private:
    Ui::SpectrumEditorCustom *ui;

    Spectrum templateSpectrum;
};

#endif // SPECTRUMEDITORCUSTOM_H
