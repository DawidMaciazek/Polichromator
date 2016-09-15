/********************************************************************************
** Form generated from reading UI file 'spectrumeditorcustomdelta.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITORCUSTOMDELTA_H
#define UI_SPECTRUMEDITORCUSTOMDELTA_H

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

class Ui_SpectrumEditorCustomDelta
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelFunctionExp;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineAmplitude;
    QLabel *label_3;
    QLineEdit *lineStart;
    QLabel *label_2;
    QLineEdit *lineWidth;

    void setupUi(QWidget *SpectrumEditorCustomDelta)
    {
        if (SpectrumEditorCustomDelta->objectName().isEmpty())
            SpectrumEditorCustomDelta->setObjectName(QStringLiteral("SpectrumEditorCustomDelta"));
        SpectrumEditorCustomDelta->resize(395, 64);
        verticalLayout = new QVBoxLayout(SpectrumEditorCustomDelta);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelFunctionExp = new QLabel(SpectrumEditorCustomDelta);
        labelFunctionExp->setObjectName(QStringLiteral("labelFunctionExp"));

        verticalLayout->addWidget(labelFunctionExp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(SpectrumEditorCustomDelta);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineAmplitude = new QLineEdit(SpectrumEditorCustomDelta);
        lineAmplitude->setObjectName(QStringLiteral("lineAmplitude"));

        horizontalLayout->addWidget(lineAmplitude);

        label_3 = new QLabel(SpectrumEditorCustomDelta);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineStart = new QLineEdit(SpectrumEditorCustomDelta);
        lineStart->setObjectName(QStringLiteral("lineStart"));

        horizontalLayout->addWidget(lineStart);

        label_2 = new QLabel(SpectrumEditorCustomDelta);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineWidth = new QLineEdit(SpectrumEditorCustomDelta);
        lineWidth->setObjectName(QStringLiteral("lineWidth"));

        horizontalLayout->addWidget(lineWidth);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SpectrumEditorCustomDelta);

        QMetaObject::connectSlotsByName(SpectrumEditorCustomDelta);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditorCustomDelta)
    {
        SpectrumEditorCustomDelta->setWindowTitle(QApplication::translate("SpectrumEditorCustomDelta", "Form", 0));
        labelFunctionExp->setText(QApplication::translate("SpectrumEditorCustomDelta", "Delta function", 0));
        label_4->setText(QApplication::translate("SpectrumEditorCustomDelta", "A", 0));
        label_3->setText(QApplication::translate("SpectrumEditorCustomDelta", "x0", 0));
        label_2->setText(QApplication::translate("SpectrumEditorCustomDelta", "w", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditorCustomDelta: public Ui_SpectrumEditorCustomDelta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITORCUSTOMDELTA_H
