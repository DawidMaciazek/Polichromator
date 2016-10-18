#include "draggablecustomplot.h"

#include "spectrum.h"

DraggableCustomPlot::DraggableCustomPlot(QWidget *parent):
    QCustomPlot(parent)
{
    spectrum = Spectrum(0,10,1);
    setCursor(Qt::OpenHandCursor);
}

DraggableCustomPlot::~DraggableCustomPlot()
{
}

void DraggableCustomPlot::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    setCursor(Qt::OpenHandCursor);
}

void DraggableCustomPlot::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    setCursor(Qt::ClosedHandCursor);

    QDrag *drag = new QDrag(this);

    QByteArray plotData;
    QDataStream dataStream(&plotData, QIODevice::WriteOnly);

    dataStream << spectrum;

    QMimeData *mime = new QMimeData;
    mime->setData(DraggableCustomPlot::dragMimeType(), plotData);
    drag->setMimeData(mime);

    float scale = 0.4;
    QPixmap pixmap = this->toPixmap(this->width(),this->height(), scale);

    drag->setPixmap(pixmap);
    drag->setHotSpot(QPoint(pixmap.width()*0.2,pixmap.height()*0.5));
    drag->exec();
}

