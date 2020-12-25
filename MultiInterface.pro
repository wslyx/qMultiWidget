#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T09:12:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MultiInterface
TEMPLATE = app


SOURCES += main.cpp\
        loginwin.cpp \
    mainwindow.cpp \
    setwin.cpp

HEADERS  += loginwin.h \
    mainwindow.h \
    setwin.h

FORMS    += loginwin.ui \
    mainwindow.ui \
    setwin.ui
