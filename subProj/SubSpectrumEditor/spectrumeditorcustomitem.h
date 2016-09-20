#ifndef SPECTRUMEDITORCUSTOMITEM_H
#define SPECTRUMEDITORCUSTOMITEM_H

#include <QWidget>

#include "expparser.h"
#include "spectrum.h"

namespace Ui {
class SpectrumEditorCustomItem;
}

class SpectrumEditorCustomItem : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomItem(Spectrum templateSpectrum, QWidget *parent = 0);
    ~SpectrumEditorCustomItem();

    Spectrum getSpectrum();

signals:
    void deleteRequest(SpectrumEditorCustomItem *item);
    void updateRequest();

private slots:
    void on_toolButton_clicked();

    void on_comboFunction_currentIndexChanged(const QString &arg1);

    void functionUpdateSlot(ExpParser *parser);

private:
    Ui::SpectrumEditorCustomItem *ui;
    QList<QString> functionList;

    QWidget *currentDisplay;
    bool isInitialized;
    bool spectrumIsCurrent;
    int layoutInsertPosition;

    Spectrum spectrum;
    Spectrum templateSpectrum;
};

#endif // SPECTRUMEDITORCUSTOMITEM_H
