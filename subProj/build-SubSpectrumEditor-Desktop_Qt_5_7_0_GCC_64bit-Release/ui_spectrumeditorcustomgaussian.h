/********************************************************************************
** Form generated from reading UI file 'spectrumeditorcustomgaussian.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITORCUSTOMGAUSSIAN_H
#define UI_SPECTRUMEDITORCUSTOMGAUSSIAN_H

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

class Ui_SpectrumEditorCustomGaussian
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelFunctionExp;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineAmplitude;
    QLabel *label_3;
    QLineEdit *lineMu;
    QLabel *label_4;
    QLineEdit *lineSigma;

    void setupUi(QWidget *SpectrumEditorCustomGaussian)
    {
        if (SpectrumEditorCustomGaussian->objectName().isEmpty())
            SpectrumEditorCustomGaussian->setObjectName(QStringLiteral("SpectrumEditorCustomGaussian"));
        SpectrumEditorCustomGaussian->resize(481, 64);
        verticalLayout = new QVBoxLayout(SpectrumEditorCustomGaussian);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelFunctionExp = new QLabel(SpectrumEditorCustomGaussian);
        labelFunctionExp->setObjectName(QStringLiteral("labelFunctionExp"));

        verticalLayout->addWidget(labelFunctionExp);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(SpectrumEditorCustomGaussian);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineAmplitude = new QLineEdit(SpectrumEditorCustomGaussian);
        lineAmplitude->setObjectName(QStringLiteral("lineAmplitude"));

        horizontalLayout->addWidget(lineAmplitude);

        label_3 = new QLabel(SpectrumEditorCustomGaussian);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineMu = new QLineEdit(SpectrumEditorCustomGaussian);
        lineMu->setObjectName(QStringLiteral("lineMu"));

        horizontalLayout->addWidget(lineMu);

        label_4 = new QLabel(SpectrumEditorCustomGaussian);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        lineSigma = new QLineEdit(SpectrumEditorCustomGaussian);
        lineSigma->setObjectName(QStringLiteral("lineSigma"));

        horizontalLayout->addWidget(lineSigma);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SpectrumEditorCustomGaussian);

        QMetaObject::connectSlotsByName(SpectrumEditorCustomGaussian);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditorCustomGaussian)
    {
        SpectrumEditorCustomGaussian->setWindowTitle(QApplication::translate("SpectrumEditorCustomGaussian", "Form", 0));
        labelFunctionExp->setText(QApplication::translate("SpectrumEditorCustomGaussian", "f(x) = A exp( - (x-\316\274)^2 / (2\317\203^2)  )", 0));
        label_2->setText(QApplication::translate("SpectrumEditorCustomGaussian", "A:", 0));
        label_3->setText(QApplication::translate("SpectrumEditorCustomGaussian", "\316\274:", 0));
        label_4->setText(QApplication::translate("SpectrumEditorCustomGaussian", "\317\203:", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditorCustomGaussian: public Ui_SpectrumEditorCustomGaussian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITORCUSTOMGAUSSIAN_H
