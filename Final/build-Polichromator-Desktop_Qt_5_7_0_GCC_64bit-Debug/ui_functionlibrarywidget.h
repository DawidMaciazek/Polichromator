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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "draggablecustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FunctionLibraryWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelName;
    QPushButton *buttonEdit;
    QToolButton *deleteButton;
    DraggableCustomPlot *plot;

    void setupUi(QWidget *FunctionLibraryWidget)
    {
        if (FunctionLibraryWidget->objectName().isEmpty())
            FunctionLibraryWidget->setObjectName(QStringLiteral("FunctionLibraryWidget"));
        FunctionLibraryWidget->resize(306, 300);
        FunctionLibraryWidget->setMinimumSize(QSize(200, 200));
        FunctionLibraryWidget->setMaximumSize(QSize(306, 300));
        gridLayout = new QGridLayout(FunctionLibraryWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelName = new QLabel(FunctionLibraryWidget);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setMaximumSize(QSize(16777215, 23));

        horizontalLayout_2->addWidget(labelName);

        buttonEdit = new QPushButton(FunctionLibraryWidget);
        buttonEdit->setObjectName(QStringLiteral("buttonEdit"));

        horizontalLayout_2->addWidget(buttonEdit);

        deleteButton = new QToolButton(FunctionLibraryWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_2->addWidget(deleteButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        plot = new DraggableCustomPlot(FunctionLibraryWidget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setMinimumSize(QSize(200, 200));
        plot->setMaximumSize(QSize(300, 300));

        gridLayout->addWidget(plot, 1, 0, 1, 1);


        retranslateUi(FunctionLibraryWidget);

        QMetaObject::connectSlotsByName(FunctionLibraryWidget);
    } // setupUi

    void retranslateUi(QWidget *FunctionLibraryWidget)
    {
        FunctionLibraryWidget->setWindowTitle(QApplication::translate("FunctionLibraryWidget", "Form", 0));
        labelName->setText(QApplication::translate("FunctionLibraryWidget", "Name", 0));
        buttonEdit->setText(QApplication::translate("FunctionLibraryWidget", "Edit", 0));
        deleteButton->setText(QApplication::translate("FunctionLibraryWidget", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionLibraryWidget: public Ui_FunctionLibraryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLIBRARYWIDGET_H
