/********************************************************************************
** Form generated from reading UI file 'functionlibraryitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONLIBRARYITEM_H
#define UI_FUNCTIONLIBRARYITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "draggablecustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FunctionLibraryItem
{
public:
    QHBoxLayout *horizontalLayout;
    DraggableCustomPlot *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *FunctionLibraryItem)
    {
        if (FunctionLibraryItem->objectName().isEmpty())
            FunctionLibraryItem->setObjectName(QStringLiteral("FunctionLibraryItem"));
        FunctionLibraryItem->resize(728, 315);
        horizontalLayout = new QHBoxLayout(FunctionLibraryItem);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widget = new DraggableCustomPlot(FunctionLibraryItem);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(FunctionLibraryItem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(FunctionLibraryItem);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(FunctionLibraryItem);

        QMetaObject::connectSlotsByName(FunctionLibraryItem);
    } // setupUi

    void retranslateUi(QWidget *FunctionLibraryItem)
    {
        FunctionLibraryItem->setWindowTitle(QApplication::translate("FunctionLibraryItem", "Form", 0));
        pushButton_2->setText(QApplication::translate("FunctionLibraryItem", "PushButton", 0));
        pushButton->setText(QApplication::translate("FunctionLibraryItem", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionLibraryItem: public Ui_FunctionLibraryItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLIBRARYITEM_H
