#include "draggablecustomplot.h"

#include "spectrum.h"

DraggableCustomPlot::DraggableCustomPlot(QWidget *parent, bool draggable):
    QCustomPlot(parent),
    draggable(draggable)
{
    setCursor(Qt::OpenHandCursor);
    name = "test name";
    this->addGraph();
    this->yAxis->setRange(0, 1.3);
}

DraggableCustomPlot::~DraggableCustomPlot()
{
}

void DraggableCustomPlot::setSpectrum(Spectrum spec)
{
    spectrum = spec;
    this->xAxis->setRange(spec.x[0], spec.x[spec.size-1]);
    this->graph(0)->setData(spec.x, spec.y);
    this->replot();
}

void DraggableCustomPlot::setName(QString newName)
{
    qDebug() << "SETTING NAMEEE!";
    name = newName;
}

void DraggableCustomPlot::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
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

    qDebug() << "pushing name: " << name;
    dataStream << spectrum << name;

    QMimeData *mime = new QMimeData;
    mime->setData(DraggableCustomPlot::dragMimeType(), plotData);
    drag->setMimeData(mime);

    float scale = 0.4;
    QPixmap pixmap = this->toPixmap(this->width(),this->height(), scale);

    drag->setPixmap(pixmap);
    drag->setHotSpot(QPoint(pixmap.width()*0.2,pixmap.height()*0.5));
    drag->exec();
    setCursor(Qt::OpenHandCursor);
}

