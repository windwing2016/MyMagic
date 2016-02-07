#ifndef IMESSAGEVIEW_H
#define IMESSAGEVIEW_H

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <QString>

NS_MCFC_BEGIN
enum MessageResult
{
    MessageResultOk     = 0,
    MessageResultCancel = 1,
    MessageResultYes    = 2,
    MessageResultNo     = 3
};


class IMessageView
{
public:
    virtual void Info(const MCF_STRING &text,const MCF_STRING &caption=_L(""))=0;
    virtual void Info(const QString &text, const QString &caption="")=0;
    virtual void Warning(const MCF_STRING & text, const MCF_STRING & caption = _L("")) = 0;
    virtual void Warning(const QString & text, const QString & caption = "") = 0;
    virtual void Error(const MCF_STRING & text, const MCF_STRING & caption = _L("")) = 0;
    virtual void Error(const QString & text, const QString & caption = "") = 0;
    virtual MessageResult Question(const MCF_STRING & text, const MCF_STRING & caption = _L("")) = 0;
    virtual MessageResult Question(const QString & text, const QString & caption = "") = 0;





};
















NS_MCFC_END















#endif // IMESSAGEVIEW_H
