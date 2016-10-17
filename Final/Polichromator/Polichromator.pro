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
    functionlibraryitem.cpp \
    qcustomplot.cpp \
    draggablecustomplot.cpp

HEADERS  += mainwindow.h \
    functionlibrary.h \
    functionsequence.h \
    functionlibraryitem.h \
    qcustomplot.h \
    draggablecustomplot.h

FORMS    += mainwindow.ui \
    functionlibrary.ui \
    functionsequence.ui \
    functionlibraryitem.ui
