#include "draggablecustomplot.h"

DraggableCustomPlot::DraggableCustomPlot(QWidget *parent):
    QCustomPlot(parent)
{
    setCursor(Qt::OpenHandCursor);
}

DraggableCustomPlot::~DraggableCustomPlot()
{
}

void DraggableCustomPlot::mouseReleaseEvent(QMouseEvent *event)
{
    setCursor(Qt::OpenHandCursor);
}

void DraggableCustomPlot::mousePressEvent(QMouseEvent *event)
{
    setCursor(Qt::ClosedHandCursor);

    QDrag *drag = new QDrag(this);

    QByteArray plotData;
    QDataStream dataStream(&plotData, QIODevice::WriteOnly);

    QMimeData *mime = new QMimeData;
    mime->setData(DraggableCustomPlot::dragMimeType(), plotData);
    drag->setMimeData(mime);

    float scale = 0.4;
    QPixmap pixmap = this->toPixmap(this->width(),this->height(), scale);

    drag->setPixmap(pixmap);
    drag->setHotSpot(QPoint(pixmap.width()*0.2,pixmap.height()*0.5));
    drag->exec();
}

