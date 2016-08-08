#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T08:04:07
#
#-------------------------------------------------

QT       += core gui
QT += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled8
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calendar.cpp \
    test.cpp \
    dialog.cpp \
    systemtray.cpp \
    notification.cpp

HEADERS  += mainwindow.h \
    calendar.h \
    test.h \
    dialog.h \
    systemtray.h \
    notification.h

FORMS    += mainwindow.ui \
    dialog.ui \
    notification.ui
CONFIG+=C++11
CONFIG += static
