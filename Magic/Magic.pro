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

INCLUDEPATH +=../Toolkits/boost_1_56_0 /
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/

INCLUDEPATH +=../Toolkits/boost_1_56_0 /
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv2/


DESTDIR+= ../bin
#  DESTDIR 的作用  指定生成的应用程序放置的目录

SOURCES += main.cpp\
        mainwindow.cpp \
    test1.cpp

HEADERS  += mainwindow.h \
    test.h \
    test2.h

FORMS    += mainwindow.ui
