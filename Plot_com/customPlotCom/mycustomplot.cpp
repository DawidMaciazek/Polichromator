#include "mycustomplot.h"
#include <QDebug>

MyCustomPlot::MyCustomPlot(QWidget *parent):
    QCustomPlot(parent)
{
    qDebug() << "INITIALIZED !";

}

void MyCustomPlot::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "plot pressed!"    ;

    QMimeData *mime = new QMimeData;
    QByteArray itemData;
    mime->setData("none", itemData);

    QDrag *drag = new QDrag(this);
    drag->setMimeData(mime);

    float scale = 0.3;
    QPixmap pixmap = this->toPixmap(this->width(), this->height(), scale);
    drag->setPixmap(pixmap);
    drag->setHotSpot(QPoint(this->width()*scale*0.2, this->height()*scale*0.5));
    drag->exec();
}
