#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <QVector>
#include "expparser.h"

class Spectrum
{
public:
    Spectrum(double start, double stop, double step, bool inclusive = true);
    Spectrum(ExpParser *parser, Spectrum &parent);

    Spectrum &operator =( const Spectrum &spec); // assigment constructor
    Spectrum &operator +=( const Spectrum spec);// addition assigment
    Spectrum(const Spectrum& spec); // Copy constructor
    //Spectrum operator +(Spectrum spec);

    //	R K::operator +(S b);
    ~Spectrum();

    double start;
    double stop;
    double step;
    int size;

    QVector<double> x;
    QVector<double> y;
};

#endif // SPECTRUM_H
