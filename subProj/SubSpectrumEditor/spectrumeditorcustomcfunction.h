#ifndef SPECTRUMEDITORCUSTOMCFUNCTION_H
#define SPECTRUMEDITORCUSTOMCFUNCTION_H

#include <QWidget>

namespace Ui {
class SpectrumEditorCustomCFunction;
}

class SpectrumEditorCustomCFunction : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomCFunction(QWidget *parent = 0);
    ~SpectrumEditorCustomCFunction();

private:
    Ui::SpectrumEditorCustomCFunction *ui;
};

#endif // SPECTRUMEDITORCUSTOMCFUNCTION_H
