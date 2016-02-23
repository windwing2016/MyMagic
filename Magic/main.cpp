#include "mainwindow.h"
#include <QApplication>
#include <../McfCore/mcf.h>
#include <QTextCodec>
#include <../McfCore/McfContext.h>
#include <QDebug>
//#include <qdebug.h>


using namespace Mcf;
using namespace std;

#define ERR_NO_SYS_PATHS                0x0000001
#define ERR_NO_CONTEXT_LIB              0x0000002
#define ERR_NO_CONTEXT_PROC             0x0000003
#define ERR_CANNOT_LOAD_CONTEXT_LIB     0x0000004
#define ERR_CANNOT_FIND_CONTEXT_PROC    0x0000005
#define ERR_NULL_CONTEXT                0x0000006
#define ERR_MULTI_MAGIC_INSTANCE        0x0000007
#define ERR_LOG_SYS_FAILED              0x0000008

void Call_GetBinFolder()
{
   MCF_STRING directory=McfContext::GetBinFolder();
   std::wcout<<directory<<endl;
}


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
    qRegisterMetaType<MCF_STRING>("MCF_STRING");
    qRegisterMetaType<MCF_BYTE> ("MCF_BYTE");
#if 1
    try
    {
        //set application version
       // QApplication::setApplicationVersion(QString::fromStdWString(McfContext::GetAppVersion()));
        //get configuration folder
      //  Call_GetBinFolder();
        MCF_STRING binFolder=McfContext::GetBinFolder();
        MCF_STRING configFolder=McfContext::GetConfigFolder();
        MCF_STRING dataFolder = McfContext::GetDataFolder();
        MCF_STRING logFolder = McfContext::GetLogFolder();
         if(binFolder.length() == 0 || configFolder.length() == 0 || dataFolder.length() == 0 || logFolder.length() == 0)
         {
             throw ERR_NO_SYS_PATHS;
         }

         //Load boot settings
         MCF_STRING bootFile=configFolder+_L("\\boot.settings");
         MCF_IFSTREAM fs(bootFile);



      //  std::wcout<<binFolder<<endl;
      //qDebug() << "binFolder";
        // qDebug(&binFolder);

    }
    catch(int & errorCode)
    {
        QString error;
        switch (errorCode)
        {
        case ERR_NO_SYS_PATHS:
            error = QObject::tr("Cannot find one or more system paths.");
            break;

        case ERR_NO_CONTEXT_LIB:
            error = QObject::tr("No context library specified.");
            break;

        case ERR_NO_CONTEXT_PROC:
            error = QObject::tr("No context procedure specified.");
            break;

        case ERR_CANNOT_LOAD_CONTEXT_LIB:
            error = QObject::tr("Cannot load context library.");
            break;

        case ERR_CANNOT_FIND_CONTEXT_PROC:
            error = QObject::tr("Cannot find context factory procedure from the specified library.");
            break;

        case ERR_NULL_CONTEXT:
            error = QObject::tr("Null context created by the specified factory procedure.");
            break;

        case ERR_MULTI_MAGIC_INSTANCE:
            error = QObject::tr("There is another Magic instance already running.");
            break;

        case ERR_LOG_SYS_FAILED:
            error = QObject::tr("Failed to initialize logging system.");
            break;
        }

    }

//    catch(...)
//    {

//    }
#endif
    //get configuration folder
    MCF_STRING binFolder=McfContext::GetBinFolder();
  //  std::wcout<<binFolder<<endl;
  //  qDebug() << binFolder;
    MainWindow w;
    w.show();



    return a.exec();
}
