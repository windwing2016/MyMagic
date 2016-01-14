#-------------------------------------------------
#
# Project created by QtCreator 2016-01-14T21:45:34
#
#-------------------------------------------------

QT       -= gui
QT    +=widgets

TARGET = McfCore
TEMPLATE = lib

DEFINES += MCF_CORE_DLL

SOURCES += mcfcore.cpp \
    mcf/ViewModels/NotifiableProperties.cpp

DESTDIR+= ../bin


TOOLKIT_DIR=../Toolkits


INCLUDEPATH +=../Toolkits/boost_1_56_0  \

DEFINES += MCF_CORE_DLL _CRT_SECURE_NO_WARNINGS

INCLUDEPATH +=../Toolkits/opencv_2_4_9/include


HEADERS += mcfcore.h\
        mcfcore_global.h \
    mcf.h \
    mcf/ViewModels/NotifiableProperties.h \
    mcf/UI/BindHelper.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
