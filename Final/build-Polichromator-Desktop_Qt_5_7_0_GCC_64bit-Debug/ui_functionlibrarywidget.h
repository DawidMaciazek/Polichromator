/********************************************************************************
** Form generated from reading UI file 'functionlibrarywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONLIBRARYWIDGET_H
#define UI_FUNCTIONLIBRARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "draggablecustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FunctionLibraryWidget
{
public:
    QHBoxLayout *horizontalLayout;
    DraggableCustomPlot *plot;
    QVBoxLayout *verticalLayout;
    QLabel *labelName;
    QPushButton *buttonEdit;

    void setupUi(QWidget *FunctionLibraryWidget)
    {
        if (FunctionLibraryWidget->objectName().isEmpty())
            FunctionLibraryWidget->setObjectName(QStringLiteral("FunctionLibraryWidget"));
        FunctionLibraryWidget->resize(306, 300);
        FunctionLibraryWidget->setMinimumSize(QSize(200, 200));
        FunctionLibraryWidget->setMaximumSize(QSize(306, 300));
        horizontalLayout = new QHBoxLayout(FunctionLibraryWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plot = new DraggableCustomPlot(FunctionLibraryWidget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setMinimumSize(QSize(200, 200));
        plot->setMaximumSize(QSize(300, 300));

        horizontalLayout->addWidget(plot);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelName = new QLabel(FunctionLibraryWidget);
        labelName->setObjectName(QStringLiteral("labelName"));

        verticalLayout->addWidget(labelName);

        buttonEdit = new QPushButton(FunctionLibraryWidget);
        buttonEdit->setObjectName(QStringLiteral("buttonEdit"));

        verticalLayout->addWidget(buttonEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(FunctionLibraryWidget);

        QMetaObject::connectSlotsByName(FunctionLibraryWidget);
    } // setupUi

    void retranslateUi(QWidget *FunctionLibraryWidget)
    {
        FunctionLibraryWidget->setWindowTitle(QApplication::translate("FunctionLibraryWidget", "Form", 0));
        labelName->setText(QApplication::translate("FunctionLibraryWidget", "Name", 0));
        buttonEdit->setText(QApplication::translate("FunctionLibraryWidget", "Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionLibraryWidget: public Ui_FunctionLibraryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLIBRARYWIDGET_H
