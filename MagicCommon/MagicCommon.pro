#-------------------------------------------------
#
# Project created by QtCreator 2016-03-17T15:37:09
#
#-------------------------------------------------

QT  += widgets serialport

TARGET = MagicCommon
TEMPLATE = lib

DESTDIR+= ../bin

DEFINES += MAGICCOMMON_DLL _SCL_SECURE_NO_WARNINGS _CRT_SECURE_NO_WARNINGS VISCA_STATIC

SOURCES += magiccommon.cpp \
    ViewModels/InitViewModels.cpp

LIBS += -L../bin  -lMcfCore
#LIBS += -L/bin  -lMcfCore

TOOLKIT_DIR=../Toolkits


INCLUDEPATH +=$$TOOLKIT_DIR/boost_1_56_0

INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv2/



HEADERS += magiccommon.h\
    ViewModels/InitViewModels.h \
    Magic.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}


