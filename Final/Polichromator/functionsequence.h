#ifndef FUNCTIONSEQUENCE_H
#define FUNCTIONSEQUENCE_H

#include <QScrollArea>

namespace Ui {
class FunctionSequence;
}

class FunctionSequence : public QScrollArea
{
    Q_OBJECT

public:
    explicit FunctionSequence(QWidget *parent = 0);
    ~FunctionSequence();

protected:
    void dragEnterEvent(QDragEnterEvent *event) Q_DECL_OVERRIDE;
    void dropEvent(QDropEvent *event) Q_DECL_OVERRIDE;

private:
    Ui::FunctionSequence *ui;
};

#endif // FUNCTIONSEQUENCE_H
