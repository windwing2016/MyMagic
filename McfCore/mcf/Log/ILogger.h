#ifndef ILOGGER_H
#define ILOGGER_H

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <string>
#include <stdio.h>
#include <sstream>
#include <QString>

NS_MCFC_BEGIN

enum LogLevels
{
    LogLevelTrace = 0,
    LogLevelDebug = 1,
    LogLevelInfo = 2,
    LogLevelWarning = 3,
    LogLevelError = 4,
    LogLevelFatal = 5
};

#define LOG_WITH_SRC_INFO(level, message)   \
{   \
    std::ostringstream __oss__;  \
    __oss__ << __FILE__ << "(" << __LINE__ << ") " << message;  \
    ILogger::LogWithLevel(level, QString::fromStdString(__oss__.str()));  \
}
#define LOG_SRC_TRACE(message)      LOG_WITH_SRC_INFO(LogLevelTrace, message)
#define LOG_SRC_DEBUG(message)      LOG_WITH_SRC_INFO(LogLevelDebug, message)
#define LOG_SRC_INFO(message)       LOG_WITH_SRC_INFO(LogLevelInfo, message)
#define LOG_SRC_WARNING(message)    LOG_WITH_SRC_INFO(LogLevelWarning, message)
#define LOG_SRC_ERROR(message)      LOG_WITH_SRC_INFO(LogLevelError, message)
#define LOG_SRC_FATAL(message)      LOG_WITH_SRC_INFO(LogLevelFatal, message)

class MCFC_API ILogger
{
protected:
    ILogger();

public:
    // Changes the global logger.
    static void SetGlobalLogger(ILogger* logger);

public:
    static void LogFatal(const QString & message);
    static void LogError(const QString & message);
    static void LogWarning(const QString & message);
    static void LogInfo(const QString & message);
    static void LogDebug(const QString & message);
    static void LogTrace(const QString & message);
    static void LogWithLevel(LogLevels level, const QString & message);

    virtual void Log(LogLevels level, const std::string & message) = 0;
    virtual void SetLevel(LogLevels level) = 0;

private:
    static ILogger* _globalLogger;
};





NS_MCFC_END







































#endif // ILOGGER_H
