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

private:
    Ui::FunctionSequence *ui;
};

#endif // FUNCTIONSEQUENCE_H
