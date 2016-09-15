#ifndef SPECTRUMEDITORCUSTOMITEM_H
#define SPECTRUMEDITORCUSTOMITEM_H

#include <QWidget>

namespace Ui {
class SpectrumEditorCustomItem;
}

class SpectrumEditorCustomItem : public QWidget
{
    Q_OBJECT

public:
    explicit SpectrumEditorCustomItem(QWidget *parent = 0);
    ~SpectrumEditorCustomItem();

signals:
    void deleteRequest(SpectrumEditorCustomItem *item);

private slots:
    void on_toolButton_clicked();

    void on_comboFunction_currentIndexChanged(const QString &arg1);

private:
    Ui::SpectrumEditorCustomItem *ui;
    QList<QString> functionList;

    QWidget *currentDisplay;
    bool isInitialized;
    int layoutInsert;
};

#endif // SPECTRUMEDITORCUSTOMITEM_H
