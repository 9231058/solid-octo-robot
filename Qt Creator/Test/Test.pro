#-------------------------------------------------
#
# Project created by QtCreator 2014-03-18T13:34:36
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    http.cpp

HEADERS  += mainwindow.h \
    http.h

FORMS    += mainwindow.ui
