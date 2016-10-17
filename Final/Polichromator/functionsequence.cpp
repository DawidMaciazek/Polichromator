#include "functionsequence.h"
#include "ui_functionsequence.h"

#include <QDebug>

FunctionSequence::FunctionSequence(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::FunctionSequence)
{
    ui->setupUi(this);
}

FunctionSequence::~FunctionSequence()
{
    delete ui;
}
