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
#include <QApplication>   //在.pro文件中加入QT    +=widgets  既可以包含该头文件
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


























NS_MCFC_END

#endif // MCFCORE_H
