#-------------------------------------------------
#
# Project created by QtCreator 2016-01-12T22:05:08
#
#-------------------------------------------------

QT       += core gui
QT       +=xml
QT       +=network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Magic
TEMPLATE = app


DESTDIR+= ../bin
#  DESTDIR 的作用  指定生成的应用程序放置的目录

SOURCES += main.cpp\
        mainwindow.cpp \
    test1.cpp

HEADERS  += mainwindow.h \
    test.h \
    test2.h

FORMS    += mainwindow.ui
