/********************************************************************************
** Form generated from reading UI file 'spectrumeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMEDITOR_H
#define UI_SPECTRUMEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpectrumEditor
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *SpectrumEditor)
    {
        if (SpectrumEditor->objectName().isEmpty())
            SpectrumEditor->setObjectName(QStringLiteral("SpectrumEditor"));
        SpectrumEditor->resize(1363, 428);
        gridLayout = new QGridLayout(SpectrumEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        retranslateUi(SpectrumEditor);

        QMetaObject::connectSlotsByName(SpectrumEditor);
    } // setupUi

    void retranslateUi(QWidget *SpectrumEditor)
    {
        SpectrumEditor->setWindowTitle(QApplication::translate("SpectrumEditor", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class SpectrumEditor: public Ui_SpectrumEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMEDITOR_H
