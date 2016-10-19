#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T08:44:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = Polichromator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    functionlibrary.cpp \
    functionsequence.cpp \
    qcustomplot.cpp \
    draggablecustomplot.cpp \
    functionlibrarywidget.cpp \
    expparser.cpp \
    spectrum.cpp \
    spectrumeditorcustom.cpp \
    spectrumeditorcustomcfunction.cpp \
    spectrumeditorcustomdelta.cpp \
    spectrumeditorcustomgaussian.cpp \
    spectrumeditorcustomitem.cpp \
    tinyexpr.c \
    functionsequencewidget.cpp

HEADERS  += mainwindow.h \
    functionlibrary.h \
    functionsequence.h \
    qcustomplot.h \
    draggablecustomplot.h \
    functionlibrarywidget.h \
    expparser.h \
    spectrum.h \
    spectrumeditorcustom.h \
    spectrumeditorcustomcfunction.h \
    spectrumeditorcustomdelta.h \
    spectrumeditorcustomgaussian.h \
    spectrumeditorcustomitem.h \
    tinyexpr.h \
    functionsequencewidget.h

FORMS    += mainwindow.ui \
    functionlibrary.ui \
    functionsequence.ui \
    functionlibrarywidget.ui \
    spectrumeditorcustom.ui \
    spectrumeditorcustomcfunction.ui \
    spectrumeditorcustomdelta.ui \
    spectrumeditorcustomgaussian.ui \
    spectrumeditorcustomitem.ui \
    functionsequencewidget.ui
