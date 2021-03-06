#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;

    QString reduction;
};

#endif // DIALOG_H
