/********************************************************************************
** Form generated from reading UI file 'spectrumeditorcustomitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITORCUSTOMITEM_H
#define UI_SPECTRUMEDITORCUSTOMITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpectrumEditorCustomItem
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboFunction;
    QFrame *line;
    QToolButton *toolButton;

    void setupUi(QWidget *SpectrumEditorCustomItem)
    {
        if (SpectrumEditorCustomItem->objectName().isEmpty())
            SpectrumEditorCustomItem->setObjectName(QStringLiteral("SpectrumEditorCustomItem"));
        SpectrumEditorCustomItem->resize(586, 65);
        gridLayout = new QGridLayout(SpectrumEditorCustomItem);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboFunction = new QComboBox(SpectrumEditorCustomItem);
        comboFunction->setObjectName(QStringLiteral("comboFunction"));

        gridLayout->addWidget(comboFunction, 0, 0, 1, 1);

        line = new QFrame(SpectrumEditorCustomItem);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        toolButton = new QToolButton(SpectrumEditorCustomItem);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 2, 1, 1);


        retranslateUi(SpectrumEditorCustomItem);

        QMetaObject::connectSlotsByName(SpectrumEditorCustomItem);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditorCustomItem)
    {
        SpectrumEditorCustomItem->setWindowTitle(QApplication::translate("SpectrumEditorCustomItem", "Form", 0));
        toolButton->setText(QApplication::translate("SpectrumEditorCustomItem", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditorCustomItem: public Ui_SpectrumEditorCustomItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITORCUSTOMITEM_H
