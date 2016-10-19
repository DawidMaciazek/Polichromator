#include "draggablecustomplot.h"

#include "spectrum.h"

DraggableCustomPlot::DraggableCustomPlot(QWidget *parent, bool draggable):
    QCustomPlot(parent),
    draggable(draggable)
{
    spectrum = Spectrum(0,14,1);

    if(draggable)
        setCursor(Qt::OpenHandCursor);
}

DraggableCustomPlot::~DraggableCustomPlot()
{
}

void DraggableCustomPlot::setSpectrum(Spectrum spec)
{
    spectrum = spec;
}

void DraggableCustomPlot::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if(!draggable)
        return;

    setCursor(Qt::OpenHandCursor);
}

void DraggableCustomPlot::mousePressEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    if(!draggable)
        return;

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

