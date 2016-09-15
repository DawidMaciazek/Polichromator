/********************************************************************************
** Form generated from reading UI file 'spectrumeditorcustom.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITORCUSTOM_H
#define UI_SPECTRUMEDITORCUSTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpectrumEditorCustom
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QToolButton *buttonAddFunction;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayoutFunctions;

    void setupUi(QWidget *SpectrumEditorCustom)
    {
        if (SpectrumEditorCustom->objectName().isEmpty())
            SpectrumEditorCustom->setObjectName(QStringLiteral("SpectrumEditorCustom"));
        SpectrumEditorCustom->resize(828, 344);
        gridLayout = new QGridLayout(SpectrumEditorCustom);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SpectrumEditorCustom);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboBox = new QComboBox(SpectrumEditorCustom);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        buttonAddFunction = new QToolButton(SpectrumEditorCustom);
        buttonAddFunction->setObjectName(QStringLiteral("buttonAddFunction"));

        verticalLayout->addWidget(buttonAddFunction);


        gridLayout->addLayout(verticalLayout, 0, 2, 1, 1);

        scrollArea = new QScrollArea(SpectrumEditorCustom);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(300, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 301, 324));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayoutFunctions = new QVBoxLayout();
        verticalLayoutFunctions->setObjectName(QStringLiteral("verticalLayoutFunctions"));

        gridLayout_2->addLayout(verticalLayoutFunctions, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 1, 1, 1);


        retranslateUi(SpectrumEditorCustom);

        QMetaObject::connectSlotsByName(SpectrumEditorCustom);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditorCustom)
    {
        SpectrumEditorCustom->setWindowTitle(QApplication::translate("SpectrumEditorCustom", "Form", 0));
        label->setText(QApplication::translate("SpectrumEditorCustom", "PLOT HERE!", 0));
        buttonAddFunction->setText(QApplication::translate("SpectrumEditorCustom", "Add function", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditorCustom: public Ui_SpectrumEditorCustom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITORCUSTOM_H
