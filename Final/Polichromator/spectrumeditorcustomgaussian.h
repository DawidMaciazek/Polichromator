#ifndef SPECTRUMEDITORCUSTOMGAUSSIAN_H
#define SPECTRUMEDITORCUSTOMGAUSSIAN_H

#include <QWidget>

#include "expparser.h"

namespace Ui {
class SpectrumEditorCustomGaussian;
}

class SpectrumEditorCustomGaussian : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomGaussian(QWidget *parent = 0);
    ~SpectrumEditorCustomGaussian();

signals:
    void functionUpdateRequest(ExpParser *parser);

private slots:
    void on_lineAmplitude_textChanged(const QString &arg1);

    void on_lineMu_textChanged(const QString &arg1);

    void on_lineSigma_textChanged(const QString &arg1);

private:
    Ui::SpectrumEditorCustomGaussian *ui;
    void validateInput();
    bool amplitudeFlag;
    bool muFlag;
    bool sigmaFlag;
};

#endif // SPECTRUMEDITORCUSTOMGAUSSIAN_H
