/********************************************************************************
** Form generated from reading UI file 'functionsequencewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONSEQUENCEWIDGET_H
#define UI_FUNCTIONSEQUENCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "draggablecustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_FunctionSequenceWidget
{
public:
    QHBoxLayout *horizontalLayout;
    DraggableCustomPlot *plot;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *FunctionSequenceWidget)
    {
        if (FunctionSequenceWidget->objectName().isEmpty())
            FunctionSequenceWidget->setObjectName(QStringLiteral("FunctionSequenceWidget"));
        FunctionSequenceWidget->resize(577, 303);
        horizontalLayout = new QHBoxLayout(FunctionSequenceWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plot = new DraggableCustomPlot(FunctionSequenceWidget);
        plot->setObjectName(QStringLiteral("plot"));

        horizontalLayout->addWidget(plot);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(FunctionSequenceWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(FunctionSequenceWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        pushButton = new QPushButton(FunctionSequenceWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(FunctionSequenceWidget);

        QMetaObject::connectSlotsByName(FunctionSequenceWidget);
    } // setupUi

    void retranslateUi(QWidget *FunctionSequenceWidget)
    {
        FunctionSequenceWidget->setWindowTitle(QApplication::translate("FunctionSequenceWidget", "Form", 0));
        label->setText(QApplication::translate("FunctionSequenceWidget", "TextLabel", 0));
        pushButton->setText(QApplication::translate("FunctionSequenceWidget", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionSequenceWidget: public Ui_FunctionSequenceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONSEQUENCEWIDGET_H
