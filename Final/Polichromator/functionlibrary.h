#ifndef FUNCTIONLIBRARY_H
#define FUNCTIONLIBRARY_H

#include <QScrollArea>

namespace Ui {
class FunctionLibrary;
}

class FunctionLibrary : public QScrollArea
{
    Q_OBJECT

public:
    explicit FunctionLibrary(QWidget *parent = 0);
    ~FunctionLibrary();

private:
    Ui::FunctionLibrary *ui;
};

#endif // FUNCTIONLIBRARY_H
