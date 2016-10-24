#ifndef FUNCTIONSEQUENCEWIDGET_H
#define FUNCTIONSEQUENCEWIDGET_H

#include <QWidget>

#include "draggablecustomplot.h"

#include "spectrum.h"

namespace Ui {
class FunctionSequenceWidget;
}

class FunctionSequenceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionSequenceWidget(QWidget *parent = 0);
    explicit FunctionSequenceWidget(QWidget *parent, Spectrum spectrum);
    ~FunctionSequenceWidget();

    const DraggableCustomPlot *getPlot();

    void setName(QString newName);

private slots:
    void on_buttonDelete_clicked();

private:
    Ui::FunctionSequenceWidget *ui;
    Spectrum spectrum;
    QString name;
};

#endif // FUNCTIONSEQUENCEWIDGET_H
