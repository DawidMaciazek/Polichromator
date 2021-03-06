#ifndef SPECTRUMEDITORCUSTOM_H
#define SPECTRUMEDITORCUSTOM_H

#include <QWidget>

#include "spectrum.h"
#include "spectrumeditorcustomitem.h"
#include "expparser.h"

namespace Ui {
class SpectrumEditorCustom;
}

class SpectrumEditorCustom : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustom(Spectrum templateSpectrum, QWidget *parent = 0);
    ~SpectrumEditorCustom();

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
