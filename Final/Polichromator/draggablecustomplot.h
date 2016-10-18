#ifndef DRAGGABLECUSTOMPLOT_H
#define DRAGGABLECUSTOMPLOT_H

#include <QDrag>

#include "qcustomplot.h"

class DraggableCustomPlot : public QCustomPlot
{
public:
    DraggableCustomPlot(QWidget *parent);
    ~DraggableCustomPlot();

     static QString dragMimeType() { return QStringLiteral("draggablecustomplot/spectrum") ;};

protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
};

#endif // DRAGGABLECUSTOMPLOT_H
