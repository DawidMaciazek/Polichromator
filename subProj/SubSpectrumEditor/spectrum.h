#ifndef SPECTRUM_H
#define SPECTRUM_H

#include <QVector>
#include "expparser.h"

class Spectrum
{
public:
    Spectrum();
    Spectrum(double start, double stop, double step, bool inclusive = true);
    Spectrum(ExpParser *parser, Spectrum &parent);

    Spectrum &envelope(const Spectrum spec);

    Spectrum &operator =( const Spectrum &spec); // assigment constructor
    Spectrum &operator +=( const Spectrum spec);// addition assigment
    Spectrum &operator *=( const Spectrum spec);// addition assigment
    Spectrum(const Spectrum& spec); // Copy constructor

    //	R K::operator +(S b);
    ~Spectrum();

    bool valid;
    double start;
    double stop;
    double step;
    int size;

    QVector<double> x;
    QVector<double> y;
};

#endif // SPECTRUM_H
