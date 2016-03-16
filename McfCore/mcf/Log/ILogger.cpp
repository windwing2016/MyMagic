#include "ILogger.h"

using namespace Mcf;

ILogger* ILogger::_globalLogger=NULL;
//-----------------------------------
ILogger::ILogger()
{
}

//------------------------------------------------------------------------------------------------------
void ILogger::SetGlobalLogger(ILogger* logger)
{
    _globalLogger = logger;
}

//------------------------------------------------------------------------------------------------------
void ILogger::LogFatal(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelFatal, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void Mcf::ILogger::LogError(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelError, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void Mcf::ILogger::LogWarning(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelWarning, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void Mcf::ILogger::LogInfo(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelInfo, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void Mcf::ILogger::LogDebug(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelDebug, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void Mcf::ILogger::LogTrace(const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(LogLevelTrace, message.toStdString());
}

//------------------------------------------------------------------------------------------------------
void ILogger::LogWithLevel(LogLevels level, const QString &message)
{
    if (_globalLogger == NULL) return;
    _globalLogger->Log(level, message.toStdString());
}



