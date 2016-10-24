#ifndef FUNCTIONLIBRARYWIDGET_H
#define FUNCTIONLIBRARYWIDGET_H

#include <QWidget>
#include <QString>

#include "spectrum.h"

namespace Ui {
class FunctionLibraryWidget;
}

class FunctionLibraryWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionLibraryWidget(Spectrum templateSpectrum, QString name, QWidget *parent = 0);
    ~FunctionLibraryWidget();

private slots:
    void on_buttonEdit_clicked();

    void on_deleteButton_clicked();

private:
    Ui::FunctionLibraryWidget *ui;
    Spectrum spectrum;
    QString name;
};

#endif // FUNCTIONLIBRARYWIDGET_H
