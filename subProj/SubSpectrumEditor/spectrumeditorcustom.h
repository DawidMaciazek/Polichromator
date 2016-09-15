#ifndef SPECTRUMEDITORCUSTOM_H
#define SPECTRUMEDITORCUSTOM_H

#include <QWidget>

#include "spectrumeditorcustomitem.h"

namespace Ui {
class SpectrumEditorCustom;
}

class SpectrumEditorCustom : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustom(QWidget *parent = 0);
    ~SpectrumEditorCustom();

private slots:
    void on_buttonAddFunction_clicked();
    void deleteItem(SpectrumEditorCustomItem *item);

private:
    Ui::SpectrumEditorCustom *ui;
};

#endif // SPECTRUMEDITORCUSTOM_H
