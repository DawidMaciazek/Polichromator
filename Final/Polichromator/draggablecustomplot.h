#ifndef DRAGGABLECUSTOMPLOT_H
#define DRAGGABLECUSTOMPLOT_H

#include <QDrag>

#include "qcustomplot.h"
#include "spectrum.h"

class DraggableCustomPlot : public QCustomPlot
{
public:
    DraggableCustomPlot(QWidget *parent, bool draggable=true);
    ~DraggableCustomPlot();

     static QString dragMimeType() { return QStringLiteral("draggablecustomplot/spectrum") ;};

     void setSpectrum(Spectrum spec);
     void setName(QString newName);

protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private:
    Spectrum spectrum;
    QString name;
    bool draggable;
};

#endif // DRAGGABLECUSTOMPLOT_H
