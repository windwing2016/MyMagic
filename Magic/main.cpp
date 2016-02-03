#include "mainwindow.h"
#include <QApplication>
#include <../McfCore/mcf.h>
#include <QTextCodec>
#include <../McfCore/McfContext.h>

int main(int argc, char *argv[])
{
#ifdef WIN32
#ifndef QT_DEBUG
    SetUnhandledExceptionFilter(GTPUnhandledExceptionFilter);
#endif /* QT_DEBUG */
#endif /* WIN32 */
    // Initialize main window and run QT application.
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins");

    QTextCodec *codec=QTextCodec::codecForName("System");
    QTextCodec::setCodecForLocale(codec);

    MCF_STRING lang=_L("EN");
    try
    {
        //set application version
        QApplication::setApplicationVersion(QString::fromStdWString(McfContext::GetAppVersion()));


    }


    MainWindow w;
    w.show();



    return a.exec();
}
