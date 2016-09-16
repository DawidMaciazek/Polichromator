#include "spectrumeditorcustomcfunction.h"
#include "ui_spectrumeditorcustomcfunction.h"

#include <QDebug>

SpectrumEditorCustomCFunction::SpectrumEditorCustomCFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SpectrumEditorCustomCFunction)
{
    ui->setupUi(this);
    ui->labelFunctionExp->setText("f(x) = ");
}

SpectrumEditorCustomCFunction::~SpectrumEditorCustomCFunction()
{
    delete ui;
}

void SpectrumEditorCustomCFunction::on_lineFunctionExp_editingFinished()
{
    QString expression = ui->lineFunctionExp->text();
    ExpParser *parser = new ExpParser(expression);

    QString prefix = "f(x)";
    int err = parser->getError();
    if(err)
    {
        qDebug() << err;
        expression += QString(" ");
        QString preError = expression.mid(0, err);
        QString error = expression.mid(err,1);
        QString afError = expression.mid(err+1);
        expression = preError;
        expression +=  "<span style=\"background-color: #FF0000\">";
        expression += error;
        expression += "</span>";
        expression += afError;

        prefix = "<font color=\"red\">" + prefix + "</font>";
    }

    QString labelText = prefix + " = " + expression;

    ui->labelFunctionExp->setText(labelText);
    emit functionUpdateRequest(parser);
}
