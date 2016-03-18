#-------------------------------------------------
#
# Project created by QtCreator 2016-01-12T22:05:08
#
#-------------------------------------------------

QT       += core gui
QT       +=xml
QT       +=network
QT       += widgets

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
#  DESTDIR 的作�?  指定生成的应用程序放置的目录

CONFIG += console
#using console


# Compiler and linker option for minidump.
win32:CONFIG(release, debug|release) {
   QMAKE_CXXFLAGS += /Ox /Zi /Fd"../bin/Magic.pdb"
   #QMAKE_LFLAGS += /DEBUG /OPT:REF /OPT:ICF
}


LIBS += -L../bin  -lMcfCore
LIBS += -L../bin  -lMagicCommon

SOURCES += main.cpp\
        mainwindow.cpp \
    test1.cpp \
    Code/Apps/MagicA/ui/Magic2.cpp \
    Code/Apps/MagicA/ui/LoginFrame/LoginFrame.cpp

HEADERS  += mainwindow.h \
    test.h \
    test2.h \
    Code/Apps/MagicA/ui/Magic2.h \
    include/test.h \
    include/test2.h \
    Code/Apps/MagicA/ui/LoginFrame/LoginFrame.h \
    Code/Apps/MagicA/MagicA.h

FORMS    += mainwindow.ui \
    Code/Apps/MagicA/ui/LoginFrame/LoginFrame.ui \
    Code/Apps/MagicA/ui/Magic2.ui

RESOURCES += \
    Code/Apps/MagicA/ui/Resources.qrc


