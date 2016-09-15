#ifndef SPECTRUMEDITORCUSTOMGAUSSIAN_H
#define SPECTRUMEDITORCUSTOMGAUSSIAN_H

#include <QWidget>

namespace Ui {
class SpectrumEditorCustomGaussian;
}

class SpectrumEditorCustomGaussian : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomGaussian(QWidget *parent = 0);
    ~SpectrumEditorCustomGaussian();

private:
    Ui::SpectrumEditorCustomGaussian *ui;
};

#endif // SPECTRUMEDITORCUSTOMGAUSSIAN_H
