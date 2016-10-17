#-------------------------------------------------
#
# Project created by QtCreator 2016-09-16T14:17:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = customPlotCom
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    qcustomplot.cpp \
    spectrum.cpp \
    expparser.cpp \
    tinyexpr.c \
    mycustomplot.cpp

HEADERS  += dialog.h \
    qcustomplot.h \
    spectrum.h \
    expparser.h \
    tinyexpr.h \
    mycustomplot.h

FORMS    += dialog.ui
