#include "functionsequence.h"
#include "ui_functionsequence.h"

#include <QDebug>
#include <QDragEnterEvent>

#include "spectrum.h"
#include "functionsequencewidget.h"

FunctionSequence::FunctionSequence(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::FunctionSequence)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

FunctionSequence::~FunctionSequence()
{
    delete ui;
}

void FunctionSequence::dragEnterEvent(QDragEnterEvent *event)
{
    event->setAccepted(true);
}

void FunctionSequence::dropEvent(QDropEvent *event)
{
    qDebug() << event->source();

    int scrollPos = 0;
    if(this->verticalScrollBar()->value())
        scrollPos = this->verticalScrollBar()->value();

    int dropPos = event->pos().y() + scrollPos;

    QVector<FunctionSequenceWidget *> layoutWidgets;
    FunctionSequenceWidget *dropWidget = NULL;

    int widgetCnt = ui->verticalLayout->count();
    int dropIndex = 0;
    int localWidget = 0;
    bool continueSearch = true;
    for(int i=0; i<widgetCnt; i++)
    {
        FunctionSequenceWidget *currentWidget =
                qobject_cast<FunctionSequenceWidget *>
                (ui->verticalLayout->itemAt(i)->widget());

        int currentCenter = currentWidget->pos().y() + currentWidget->height()/2;

        if(dropPos < currentCenter && continueSearch)
        {
           dropIndex = i - localWidget;
           continueSearch = false;
        }

        if(currentWidget->getPlot() == event->source())
        {
            localWidget = 1;
            dropWidget = currentWidget;
        }
        else
        {
            layoutWidgets.append(currentWidget);
        }
    }

    if(continueSearch)
    {
        dropIndex = widgetCnt - 1;
    }

    if(dropWidget == NULL)
    {
        qDebug() << "Outside widget !";
        dropWidget = new FunctionSequenceWidget(this);
        layoutWidgets.insert(0, dropWidget);
        ui->verticalLayout->addWidget(dropWidget);
    }
    else
    {
        layoutWidgets.insert(dropIndex, dropWidget);
    }

    for(int i=0; i<layoutWidgets.length(); i++)
    {
        ui->verticalLayout->removeWidget(layoutWidgets[i]);
    }

    for(int i=0; i<layoutWidgets.length(); i++)
    {
        ui->verticalLayout->addWidget(layoutWidgets[i]);
    }


}
