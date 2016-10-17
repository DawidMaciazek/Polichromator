/********************************************************************************
** Form generated from reading UI file 'functionsequence.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONSEQUENCE_H
#define UI_FUNCTIONSEQUENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionSequence
{
public:
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QScrollArea *FunctionSequence)
    {
        if (FunctionSequence->objectName().isEmpty())
            FunctionSequence->setObjectName(QStringLiteral("FunctionSequence"));
        FunctionSequence->resize(400, 300);
        FunctionSequence->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 298));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        FunctionSequence->setWidget(scrollAreaWidgetContents);

        retranslateUi(FunctionSequence);

        QMetaObject::connectSlotsByName(FunctionSequence);
    } // setupUi

    void retranslateUi(QScrollArea *FunctionSequence)
    {
        FunctionSequence->setWindowTitle(QApplication::translate("FunctionSequence", "ScrollArea", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionSequence: public Ui_FunctionSequence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONSEQUENCE_H
