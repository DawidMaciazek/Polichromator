/********************************************************************************
** Form generated from reading UI file 'spectrumeditorcustomcfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITORCUSTOMCFUNCTION_H
#define UI_SPECTRUMEDITORCUSTOMCFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpectrumEditorCustomCFunction
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelFunctionExp;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineFunctionExp;

    void setupUi(QWidget *SpectrumEditorCustomCFunction)
    {
        if (SpectrumEditorCustomCFunction->objectName().isEmpty())
            SpectrumEditorCustomCFunction->setObjectName(QStringLiteral("SpectrumEditorCustomCFunction"));
        SpectrumEditorCustomCFunction->resize(400, 64);
        verticalLayout = new QVBoxLayout(SpectrumEditorCustomCFunction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelFunctionExp = new QLabel(SpectrumEditorCustomCFunction);
        labelFunctionExp->setObjectName(QStringLiteral("labelFunctionExp"));

        verticalLayout->addWidget(labelFunctionExp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(SpectrumEditorCustomCFunction);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineFunctionExp = new QLineEdit(SpectrumEditorCustomCFunction);
        lineFunctionExp->setObjectName(QStringLiteral("lineFunctionExp"));

        horizontalLayout->addWidget(lineFunctionExp);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SpectrumEditorCustomCFunction);

        QMetaObject::connectSlotsByName(SpectrumEditorCustomCFunction);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditorCustomCFunction)
    {
        SpectrumEditorCustomCFunction->setWindowTitle(QApplication::translate("SpectrumEditorCustomCFunction", "Form", 0));
        labelFunctionExp->setText(QApplication::translate("SpectrumEditorCustomCFunction", "TextLabel", 0));
        label_2->setText(QApplication::translate("SpectrumEditorCustomCFunction", "f(x)", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditorCustomCFunction: public Ui_SpectrumEditorCustomCFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITORCUSTOMCFUNCTION_H
