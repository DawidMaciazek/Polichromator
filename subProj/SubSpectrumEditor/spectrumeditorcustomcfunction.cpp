#include "spectrumeditorcustomcfunction.h"
#include "ui_spectrumeditorcustomcfunction.h"

#include <QMessageBox>
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

void SpectrumEditorCustomCFunction::on_buttonHelp_clicked()
{
    QMessageBox  msgBox;
    QString msg = "";
    msg += "Valid input examples:\n";
    msg += "  exp(x+10)/2\n";
    msg += "  ((x+x^2)-2)/33\n";
    msg += "  (1+(abs(x-4)/(x-4)))/2\n";


    msg += "\n\n";
    msg += "Available functions: \n";
    msg += "  sin(), cos(), tan(), asin(), acos(), atan(), atan2(), sinh(), tanh()\n";
    msg += "  abs(), ceil(), floor()\n";
    msg += "  exp(), ln(), log(), log10(), pow()";

    msg += "\n\nAvailable mathematical constants: \n";
    msg += "  e, pi";

    msgBox.setText(msg);
    msgBox.exec();
}
