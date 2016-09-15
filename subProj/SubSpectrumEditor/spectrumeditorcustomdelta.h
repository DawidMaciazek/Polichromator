#ifndef SPECTRUMEDITORCUSTOMDELTA_H
#define SPECTRUMEDITORCUSTOMDELTA_H

#include <QWidget>

namespace Ui {
class SpectrumEditorCustomDelta;
}

class SpectrumEditorCustomDelta : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomDelta(QWidget *parent = 0);
    ~SpectrumEditorCustomDelta();

private:
    Ui::SpectrumEditorCustomDelta *ui;
};

#endif // SPECTRUMEDITORCUSTOMDELTA_H
