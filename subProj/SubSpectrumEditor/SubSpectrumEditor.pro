#-------------------------------------------------
#
# Project created by QtCreator 2016-09-15T11:13:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SubSpectrumEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    spectrumeditor.cpp \
    spectrumeditorcustom.cpp \
    spectrumeditorcustomitem.cpp \
    spectrumeditorcustomgaussian.cpp \
    spectrumeditorcustomdelta.cpp \
    spectrumeditorcustomcfunction.cpp

HEADERS  += mainwindow.h \
    spectrumeditor.h \
    spectrumeditorcustom.h \
    spectrumeditorcustomitem.h \
    spectrumeditorcustomgaussian.h \
    spectrumeditorcustomdelta.h \
    spectrumeditorcustomcfunction.h

FORMS    += mainwindow.ui \
    spectrumeditor.ui \
    spectrumeditorcustom.ui \
    spectrumeditorcustomitem.ui \
    spectrumeditorcustomgaussian.ui \
    spectrumeditorcustomdelta.ui \
    spectrumeditorcustomcfunction.ui
