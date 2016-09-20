#-------------------------------------------------
#
# Project created by QtCreator 2016-09-15T11:13:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SubSpectrumEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    spectrumeditor.cpp \
    spectrumeditorcustom.cpp \
    spectrumeditorcustomitem.cpp \
    spectrumeditorcustomgaussian.cpp \
    spectrumeditorcustomdelta.cpp \
    spectrumeditorcustomcfunction.cpp \
    tinyexpr.c \
    expparser.cpp \
    spectrum.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    spectrumeditor.h \
    spectrumeditorcustom.h \
    spectrumeditorcustomitem.h \
    spectrumeditorcustomgaussian.h \
    spectrumeditorcustomdelta.h \
    spectrumeditorcustomcfunction.h \
    tinyexpr.h \
    expparser.h \
    spectrum.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    spectrumeditor.ui \
    spectrumeditorcustom.ui \
    spectrumeditorcustomitem.ui \
    spectrumeditorcustomgaussian.ui \
    spectrumeditorcustomdelta.ui \
    spectrumeditorcustomcfunction.ui
