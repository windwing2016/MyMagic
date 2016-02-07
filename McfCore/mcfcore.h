#ifndef MCFCORE_H
#define MCFCORE_H

#include "mcfcore_global.h"


#ifdef MCF_CORE_DLL
#define MCFC_API __declspec(dllexport)
#define MCFC_TEMPLATE
#else
#define MCFC_API __declspec(dllimport)
#define MCFC_TEMPLATE extern
#endif


#define NS_MCFC_BEGIN	namespace Mcf {
#define NS_MCFC_END		}

#include "mcf.h"
#include <QObject>
#include <QApplication>   //在.pro文件中� 入QT    +=widgets  既可以包含该头文件
#include <QDateTime>
#include <QVariant>
#include <QString>
#include <QLocale>
#include <QMutex>


NS_MCFC_BEGIN


typedef enum enumMcfResponseType
{
    McfResponseInfo = 0,    // Informative response.
    McfResponseWarning = 1, // Warning response.
    McfResponseError = 2,   // Error response.
    McfResponseQuestion = 3 // Question (normally not in a response but in an assist message).
} MCF_RESPONSE_TYPE;


typedef struct tagMcfResponse
{
    MCF_STRING Message;
    MCF_RESPONSE_TYPE Type;
    QDateTime Time;

    tagMcfResponse(const MCF_STRING & message = _L(""), MCF_RESPONSE_TYPE type = McfResponseInfo)
        : Message(message), Type(type)
    {
        Time = QDateTime::currentDateTime();
    }

    tagMcfResponse(const QString & message, MCF_RESPONSE_TYPE type = McfResponseInfo)
        : Message(message.toStdWString()), Type(type)
    {
        Time = QDateTime::currentDateTime();
    }

    bool operator == (const tagMcfResponse & other)
    {
        return Type == other.Type && Message == other.Message;
    }

    static tagMcfResponse Success() { return tagMcfResponse(""); }
    static tagMcfResponse Warning(const MCF_STRING & message = _L("")) { return tagMcfResponse(message, McfResponseWarning); }
    static tagMcfResponse Warning(const QString & message = "") { return tagMcfResponse(message, McfResponseWarning); }
    static tagMcfResponse Error(const MCF_STRING & message = _L("")) { return tagMcfResponse(message, McfResponseError); }
    static tagMcfResponse Error(const QString & message = "") { return tagMcfResponse(message, McfResponseError); }
    static tagMcfResponse Info(const MCF_STRING & message = _L("")) { return tagMcfResponse(message, McfResponseInfo); }
    static tagMcfResponse Info(const QString & message = "") { return tagMcfResponse(message, McfResponseInfo); }

    MCF_BOOL IsSuccess() const { return Type == McfResponseInfo; }
    MCF_BOOL IsWarning() const { return Type == McfResponseWarning; }
    MCF_BOOL IsError() const { return Type == McfResponseError; }
    QString QMessage() const { return QString::fromStdWString(Message); }

} MCF_RESPONSE;

Q_DECLARE_METATYPE(MCF_RESPONSE_TYPE)
Q_DECLARE_METATYPE(MCF_RESPONSE)

#define MCF_TRANSLATE(context, x)       qApp->translate(context, x, 0)
























NS_MCFC_END

#endif // MCFCORE_H
