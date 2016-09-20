#include "spectrum.h"

#include <QDebug>
#include <QVector>

#include <tgmath.h>

Spectrum::Spectrum()
{
    qDebug() << "WHY YOU ARE USING MEEEEE!";
}

Spectrum::Spectrum(double start, double stop, double step, bool inclusive):
    start(start),
    stop(stop),
    step(step)
{
    if(inclusive)
        size = int( ceil((stop - start)/step)+ 1 );
    else
        size = int( ceil((stop - start)/step) );

    x = QVector<double>(size);
    double val=start;
    for(int i=0; i<size; i++)
    {
        x[i] = val;
        val+=step;
    }

    y = QVector<double>(size);
}

Spectrum::Spectrum(ExpParser *parser, Spectrum &parent):
    start(parent.start),
    stop(parent.stop),
    step(parent.step)
{
    size = parent.size;
    x = parent.x;
    y = QVector<double>(size);

    for(int i=0; i<size; i++)
    {
        y[i] = parser[0]( x.at(i) );
    }
}

Spectrum &Spectrum::operator =(const Spectrum &spec)
{
    qDebug() << "= OPERATOR!"    ;
    start = spec.start;
    stop = spec.stop;
    step = spec.step;
    size = spec.size;

    x = spec.x;
    y = spec.y;
    return *this;
}

Spectrum &Spectrum::operator +=(const Spectrum spec)
{
    qDebug() << "+= OPERATOR!";
    for(int i=0; i<size; i++)
        y[i] = y.at(i) + spec.y.at(i);
    return *this;
}

Spectrum &Spectrum::operator *=(const Spectrum spec)
{
    qDebug() << "+= OPERATOR!";
    for(int i=0; i<size; i++)
        y[i] = y.at(i) * spec.y.at(i);
    return *this;
}


Spectrum::Spectrum(const Spectrum &spec)
{
    qDebug() << "copy CONSTRUCTOR";
    start = spec.start;
    stop = spec.stop;
    step = spec.step;
    size = spec.size;

    x = spec.x;
    y = spec.y;
}


Spectrum::~Spectrum()
{

}
