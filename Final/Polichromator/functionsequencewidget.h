#ifndef FUNCTIONSEQUENCEWIDGET_H
#define FUNCTIONSEQUENCEWIDGET_H

#include <QWidget>

#include "draggablecustomplot.h"

namespace Ui {
class FunctionSequenceWidget;
}

class FunctionSequenceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionSequenceWidget(QWidget *parent = 0);
    ~FunctionSequenceWidget();

    const DraggableCustomPlot *getPlot();

private:
    Ui::FunctionSequenceWidget *ui;
};

#endif // FUNCTIONSEQUENCEWIDGET_H
