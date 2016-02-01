#-------------------------------------------------
#
# Project created by QtCreator 2016-01-15T11:14:48
#
#-------------------------------------------------

QT       += core

QT       -= gui
QT       +=widgets

TARGET = test
CONFIG   += console
CONFIG   -= app_bundle

DESTDIR+= ../bin

INCLUDEPATH +=../Toolkits/boost_1_56_0 /
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv2/


INCLUDEPATH += $$PWD/../Toolkits/boost_1_56_0
DEPENDPATH += $$PWD/../Toolkits/boost_1_56_0


INCLUDEPATH += $$PWD/../Toolkits/opencv_2_4_9
DEPENDPATH += $$PWD/../Toolkits/opencv_2_4_9

TEMPLATE = app

#BIN_DIR = ../bin
#LIBS += ../bin -lMcfCore

# Link Magic libraries.
#win32:CONFIG(release, debug|release): LIBS += -L$$BIN_DIR/release/ -lMcfCore
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$BIN_DIR/debug/ -lMcfCore

LIBS += -L../bin  -lMcfCore

SOURCES += main.cpp
