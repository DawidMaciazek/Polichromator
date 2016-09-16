#ifndef SPECTRUMEDITORCUSTOMCFUNCTION_H
#define SPECTRUMEDITORCUSTOMCFUNCTION_H

#include <QWidget>

#include "expparser.h"

namespace Ui {
class SpectrumEditorCustomCFunction;
}

class SpectrumEditorCustomCFunction : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomCFunction(QWidget *parent = 0);
    ~SpectrumEditorCustomCFunction();

signals:
    void functionUpdateRequest(ExpParser *parser);

private slots:
    void on_lineFunctionExp_editingFinished();

private:
    Ui::SpectrumEditorCustomCFunction *ui;
};

#endif // SPECTRUMEDITORCUSTOMCFUNCTION_H
