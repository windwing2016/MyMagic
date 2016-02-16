#include "mainwindow.h"
#include <QApplication>
#include <../McfCore/mcf.h>
#include <QTextCodec>
#include <../McfCore/McfContext.h>
#include <QDebug>
//#include <qdebug.h>

using namespace Mcf;


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
#if 0
    try
    {
        //set application version
       // QApplication::setApplicationVersion(QString::fromStdWString(McfContext::GetAppVersion()));
        //get configuration folder
     //   MCF_STRING binFolder=McfContext::GetBinFolder();
        //std::wcout<<binFolder<<endl;
        qDebug() << "binFolder";


    }

    catch(...)
    {

    }
#endif
    //get configuration folder
    MCF_STRING binFolder=McfContext::GetBinFolder();
  //  std::wcout<<binFolder<<endl;
    qDebug() << binFolder;
    MainWindow w;
    w.show();



    return a.exec();
}
