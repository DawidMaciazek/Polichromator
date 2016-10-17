#ifndef FUNCTIONLIBRARYITEM_H
#define FUNCTIONLIBRARYITEM_H

#include <QWidget>

namespace Ui {
class FunctionLibraryItem;
}

class FunctionLibraryItem : public QWidget
{
    Q_OBJECT

public:
    explicit FunctionLibraryItem(QWidget *parent = 0);
    ~FunctionLibraryItem();

private:
    Ui::FunctionLibraryItem *ui;
};

#endif // FUNCTIONLIBRARYITEM_H
