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
    QLabel *labelName;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *FunctionSequenceWidget)
    {
        if (FunctionSequenceWidget->objectName().isEmpty())
            FunctionSequenceWidget->setObjectName(QStringLiteral("FunctionSequenceWidget"));
        FunctionSequenceWidget->resize(577, 318);
        horizontalLayout = new QHBoxLayout(FunctionSequenceWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        plot = new DraggableCustomPlot(FunctionSequenceWidget);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setMinimumSize(QSize(300, 300));

        horizontalLayout->addWidget(plot);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelName = new QLabel(FunctionSequenceWidget);
        labelName->setObjectName(QStringLiteral("labelName"));

        gridLayout->addWidget(labelName, 0, 0, 1, 2);

        lineEdit = new QLineEdit(FunctionSequenceWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label = new QLabel(FunctionSequenceWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pushButton = new QPushButton(FunctionSequenceWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        plot->raise();
        labelName->raise();

        retranslateUi(FunctionSequenceWidget);

        QMetaObject::connectSlotsByName(FunctionSequenceWidget);
    } // setupUi

    void retranslateUi(QWidget *FunctionSequenceWidget)
    {
        FunctionSequenceWidget->setWindowTitle(QApplication::translate("FunctionSequenceWidget", "Form", 0));
        labelName->setText(QApplication::translate("FunctionSequenceWidget", "Name - Label", 0));
        label->setText(QApplication::translate("FunctionSequenceWidget", "TextLabel", 0));
        pushButton->setText(QApplication::translate("FunctionSequenceWidget", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionSequenceWidget: public Ui_FunctionSequenceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONSEQUENCEWIDGET_H
