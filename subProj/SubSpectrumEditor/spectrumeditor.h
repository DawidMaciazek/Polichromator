#ifndef SPECTRUMEDITOR_H
#define SPECTRUMEDITOR_H

#include <QWidget>

namespace Ui {
class SpectrumEditor;
}

class SpectrumEditor : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditor(QWidget *parent = 0);
    ~SpectrumEditor();

private:
    Ui::SpectrumEditor *ui;
};

#endif // SPECTRUMEDITOR_H
