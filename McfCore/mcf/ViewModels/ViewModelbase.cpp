#include <../McfCore/mcf/ViewModels/ViewModelbase.h>
#include <../McfCore/McfContext.h>
#include <QDebug>

using namespace Mcf;

IMessageView *ViewModelBase::g_msgView=NULL;
IPopupViewHandler *ViewModelBase::g_popuphandler=NULL;
//Notes: Befor using  the static variable of class  must init
//--------------------------------------------------------
ViewModelBase::ViewModelBase(QObject *parent):QObject(parent)
{

}
//-----------------------------------------------------------
ViewModelBase::~ViewModelBase()
{

}
//-----------------------------------------------------------
void ViewModelBase::SetGlobalMessageView(IMessageView *view)
{
    g_msgView=view;
}
//----------------------------------------------------------------
void ViewModelBase::SetGlobalPopupHandler(IPopupViewHandler *handler)
{
    g_popuphandler=handler;
}
//notes g_msgView and g_popuphandler is static variable is inited
//so in here can directly using
//--------------------------------------------------------------
void ViewModelBase::Info(const MCF_STRING &text, const MCF_STRING &caption)
{
    if(g_msgView==NULL) return;
    g_msgView->Info(text,caption);
}
//----------------------------------------------------------------------------
void ViewModelBase::Info(const QString &text, const QString &caption)
{
    if(g_msgView==NULL) return;
    g_msgView->Info(text,caption);
}
//--------------------------------------------------------------------------
void ViewModelBase::Warning(const MCF_STRING &text, const MCF_STRING &caption)
{
    if (g_msgView == NULL) return;
    g_msgView->Warning(text, caption);
}

//------------------------------------------------------------------------------------------------------
void ViewModelBase::Warning(const QString &text, const QString &caption)
{
    if (g_msgView == NULL) return;
    g_msgView->Warning(text, caption);
}

//------------------------------------------------------------------------------------------------------
void ViewModelBase::Error(const MCF_STRING &text, const MCF_STRING &caption)
{
    if (g_msgView == NULL) return;
    g_msgView->Error(text, caption);
}

//------------------------------------------------------------------------------------------------------
void ViewModelBase::Error(const QString &text, const QString &caption)
{
    if (g_msgView == NULL) return;
    g_msgView->Error(text, caption);
}
//---------------------------------------------------------------------
MessageResult ViewModelBase::Question(const MCF_STRING &text, const MCF_STRING &caption)
{
    if(g_msgView==NULL)
        return MessageResultCancel;
    return g_msgView->Question(text,caption);
}
//-----------------------------------------------------------
MessageResult ViewModelBase::Question(const QString &text, const QString &caption)
{
    if (g_msgView == NULL) return MessageResultCancel;
    return g_msgView->Question(text, caption);
}
//--------------------------------------------------------
void Mcf::ViewModelBase::Popup(Mcf::ViewModelBase *viewModel, MCF_BOOL modal)
{
    if(g_popuphandler==NULL)
        return;
    g_popuphandler->ShowPopupViewModel(viewModel,modal);
}
//----------------------------------------------------------------------








