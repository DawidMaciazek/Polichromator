#include "functionsequence.h"
#include "ui_functionsequence.h"

#include <QDebug>
#include <QDragEnterEvent>

#include "draggablecustomplot.h"
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
    if(event->mimeData()->hasFormat(DraggableCustomPlot::dragMimeType()))
    {
        event->setAccepted(true);
    }
    else
    {
        event->ignore();
    }
}

void FunctionSequence::dropEvent(QDropEvent *event)
{
    if(event->mimeData()->hasFormat(DraggableCustomPlot::dragMimeType()))
    {
        event->setAccepted(true);
    }
    else
    {
        event->ignore();
        return;
    }

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
        if(dropWidget == NULL)
        {
            dropIndex = widgetCnt;
        }
        else
        {
            dropIndex = widgetCnt - 1;
        }

    }

    if(dropWidget == NULL)
    {
        qDebug() << "strill ste";
        QByteArray itemData = event->mimeData()->data(DraggableCustomPlot::dragMimeType());
        QDataStream dataStream(&itemData, QIODevice::ReadOnly);

        Spectrum spectrum;
        QString newName;
        dataStream >> spectrum ;
        dataStream >> newName;

        qDebug() << "FROM STREAM NAME" << newName;
        dropWidget = new FunctionSequenceWidget(this, spectrum);
        dropWidget->setName(newName);

        layoutWidgets.insert(dropIndex, dropWidget);
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
