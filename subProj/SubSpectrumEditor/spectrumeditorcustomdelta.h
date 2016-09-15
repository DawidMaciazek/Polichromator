#ifndef SPECTRUMEDITORCUSTOMDELTA_H
#define SPECTRUMEDITORCUSTOMDELTA_H

#include <QWidget>

#include "expparser.h"

namespace Ui {
class SpectrumEditorCustomDelta;
}

class SpectrumEditorCustomDelta : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomDelta(QWidget *parent = 0);
    ~SpectrumEditorCustomDelta();

signals:
    void functionUpdateRequest(ExpParser parser);

private slots:
    void on_lineAmplitude_textChanged(const QString &arg1);

    void on_lineStart_textChanged(const QString &arg1);

    void on_lineWidth_textEdited(const QString &arg1);

private:
    Ui::SpectrumEditorCustomDelta *ui;
    void validateInput();
    bool amplitudeFlag;
    bool startFlag;
    bool widthFlag;
};

#endif // SPECTRUMEDITORCUSTOMDELTA_H
