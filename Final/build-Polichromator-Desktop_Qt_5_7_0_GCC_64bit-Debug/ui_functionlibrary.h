/********************************************************************************
** Form generated from reading UI file 'functionlibrary.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONLIBRARY_H
#define UI_FUNCTIONLIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FunctionLibrary
{
public:
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QScrollArea *FunctionLibrary)
    {
        if (FunctionLibrary->objectName().isEmpty())
            FunctionLibrary->setObjectName(QStringLiteral("FunctionLibrary"));
        FunctionLibrary->resize(400, 300);
        FunctionLibrary->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 298));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        FunctionLibrary->setWidget(scrollAreaWidgetContents);

        retranslateUi(FunctionLibrary);

        QMetaObject::connectSlotsByName(FunctionLibrary);
    } // setupUi

    void retranslateUi(QScrollArea *FunctionLibrary)
    {
        FunctionLibrary->setWindowTitle(QApplication::translate("FunctionLibrary", "ScrollArea", 0));
    } // retranslateUi

};

namespace Ui {
    class FunctionLibrary: public Ui_FunctionLibrary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLIBRARY_H
