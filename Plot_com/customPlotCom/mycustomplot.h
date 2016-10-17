#ifndef MYCUSTOMPLOT_H
#define MYCUSTOMPLOT_H

#include "qcustomplot.h"

class MyCustomPlot : public QCustomPlot
{
public:
    MyCustomPlot(QWidget *parent);

protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
};

#endif // MYCUSTOMPLOT_H
