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
    mcf/ViewModels/NotifiableProperties.cpp \
    McfContext.cpp \
    mcf/ViewModels/ViewModelbase.cpp \
    mcf/ViewModels/IMessageView.cpp

DESTDIR+= ../bin


TOOLKIT_DIR=../Toolkits


INCLUDEPATH +=../Toolkits/boost_1_56_0 /



DEFINES += MCF_CORE_DLL _CRT_SECURE_NO_WARNINGS

INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv/
INCLUDEPATH +=../Toolkits/opencv_2_4_9/include/opencv2/
#添加这几个目录是为了在打开opencv的时候无法找到其他的头文�?


HEADERS += mcfcore.h\
        mcfcore_global.h \
    mcf.h \
    mcf/ViewModels/NotifiableProperties.h \
    mcf/UI/BindHelper.h \
    McfContext.h \
    IDrive.h \
    mcf/ViewModels/ViewModelbase.h \
    mcf/ViewModels/IMessageView.h \
    mcf/Vision/LightController.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

#win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/release/ -lMcfCore
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/debug/ -lMcfCore
#else:unix: LIBS += -L$$OUT_PWD/ -lMcfCore

INCLUDEPATH += $$PWD/../Toolkits/boost_1_56_0
DEPENDPATH += $$PWD/../Toolkits/boost_1_56_0

#win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/release/ -lMcfCore
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/debug/ -lMcfCore
#else:unix: LIBS += -L$$OUT_PWD/ -lMcfCore

INCLUDEPATH += $$PWD/../Toolkits/opencv_2_4_9
DEPENDPATH += $$PWD/../Toolkits/opencv_2_4_9



# Link boost libraries.
win32:CONFIG(release, debug|release): LIBS += -L$$TOOLKIT_DIR/boost_1_56_0/stage/lib/ -llibboost_log-vc120-mt-1_56
else:win32:CONFIG(debug, debug|release): LIBS += -L$$TOOLKIT_DIR/boost_1_56_0/stage/lib/ -llibboost_log-vc120-mt-gd-1_56

win32:CONFIG(release, debug|release): LIBS += -L$$TOOLKIT_DIR/opencv_2_4_9/x86/vc12/lib -lopencv_core249 -lopencv_highgui249 -lopencv_imgproc249
else:win32:CONFIG(debug, debug|release): LIBS += -L$$TOOLKIT_DIR/opencv_2_4_9/x86/vc12/lib -lopencv_core249d -lopencv_highgui249d -lopencv_imgproc249d
