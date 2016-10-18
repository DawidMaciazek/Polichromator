#ifndef FUNCTIONLIBRARYWIDGET_H
#define FUNCTIONLIBRARYWIDGET_H

#include <QWidget>

namespace Ui {
class FunctionLibraryWidget;
}

class FunctionLibraryWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionLibraryWidget(QWidget *parent = 0);
    ~FunctionLibraryWidget();

private slots:
    void on_buttonEdit_clicked();

private:
    Ui::FunctionLibraryWidget *ui;
};

#endif // FUNCTIONLIBRARYWIDGET_H
