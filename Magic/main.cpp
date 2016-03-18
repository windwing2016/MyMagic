#include "mainwindow.h"
#include <QApplication>
#include <../McfCore/mcf.h>
#include <QTextCodec>
#include <../McfCore/McfContext.h>
#include <QDebug>
#include <../Toolkits/boost_1_56_0/boost/shared_ptr.hpp>
#include <../Toolkits/boost_1_56_0/boost/format.hpp>
#include <../Toolkits/boost_1_56_0/boost/property_tree/ptree.hpp>
#include <../Toolkits/boost_1_56_0/boost/property_tree/xml_parser.hpp>
#include <../Toolkits/boost_1_56_0/boost/algorithm/string.hpp>
#include <qsharedmemory.h>
#include <../McfCore/mcf/Log/ILogger.h>
#include <../McfCore/mcf/Log/BoostLogger.h>
#include <qmessagebox.h>
#include <qmetatype.h>

#include "Code/Apps/MagicA/ui/Magic2.h"


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
//-----------------------------------
MCF_BOOL EnsureSingleInstance()
{
    static QSharedMemory shared("F133D0A9-A3C4-493B-AE20-D1D9D50A80F9");
    if(shared.create(1)&& shared.error()!=QSharedMemory::AlreadyExists)
    {
        return MCF_TRUE;
    }
    return MCF_FALSE;

}


//-------------------------------------------

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
         boost::property_tree::wptree  ppt;
         boost::property_tree::xml_parser::read_xml(fs,ppt);

        // Ensure there is only one Magic running.
        if(!EnsureSingleInstance())
        {
            throw ERR_MULTI_MAGIC_INSTANCE;
        }
        // Initialize logging system.
        BoostLogger logger;
        if(!logger.Initialize(logFolder,_L("Magic_")))
        {
            throw ERR_LOG_SYS_FAILED;
        }
        ILogger::SetGlobalLogger(&logger);

        //start Magic
        ILogger::LogInfo("-------------------------------------------");
        ILogger::LogInfo("Start Magic...");

         // Set logging severity level.
         MCF_STRING logLevel=ppt.get(_L("bootstrap.logLevel"),_L("ERROR"));
         LogLevels severityLevel = LogLevelWarning;
         if (logLevel == _L("FATAL"))
         {
             severityLevel = LogLevelFatal;
         }
         else if (logLevel == _L("ERROR"))
         {
             severityLevel = LogLevelError;
         }
         else if (logLevel == _L("WARNING"))
         {
             severityLevel = LogLevelWarning;
         }
         else if (logLevel == _L("INFO"))
         {
             severityLevel = LogLevelInfo;
         }
         else if (logLevel == _L("DEBUG"))
         {
             severityLevel = LogLevelDebug;
         }
         else if (logLevel == _L("TRACE"))
         {
             severityLevel = LogLevelTrace;
         }
         else
         {
             ILogger::LogWarning(QString("Unknown log level: %1.").arg(QString::fromStdWString(logLevel)));
             logLevel = _L("WARNING");
         }

         logger.SetLevel(severityLevel);
         ILogger::LogInfo(QString("Log Level = %1").arg(QString::fromStdWString(logLevel)));

      // Use factory method to create corresponding context.

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
        error = QObject::tr("We are sorry that  there is a fatal error occurred:\r\n\r\n%1\r\n\r\nThe system will now terminate. Please contact Vuette support for assistance.").arg(error);
        QMessageBox::critical(NULL, QObject::tr("Magic Fatal Error"), error);
    }

    catch(...)
    {
        QMessageBox::critical(NULL,
                              QObject::tr("Magic Fatal Error"),
                              QObject::tr("We are sorry that there is an unknown fatal error occurred.\r\n\r\nThe system will ternimate. Please contact Vuette support for assistance."));
        return -1;
    }
    qRegisterMetaType<MCF_STRING>("MCF_STRING");
    qRegisterMetaType<MCF_BYTE>("MCF_BYTE");
#endif
    //get configuration folder
    MCF_STRING binFolder=McfContext::GetBinFolder();
  //  std::wcout<<binFolder<<endl;
  //  qDebug() << binFolder;
//    MainWindow w;
//    w.show();

    Magic2 w;
    w.showNormal();

    return a.exec();
}




