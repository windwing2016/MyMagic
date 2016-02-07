#ifndef VIEWMODELBASE_H
#define VIEWMODELBASE_H

#include <vector>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf/ViewModels/IMessageView.h>


NS_MCFC_BEGIN

class ViewModelBase;   //declaration the ViewModelBase class  not define the class

//-------------------------------------------

//define a popup view-view model binder (popup menus)
class MCFC_API IPopupViewHandler
{
public:
    ///
    /// \brief ShowPopupViewModel   show a popup viewmodel
    /// \param viewmodel
    /// \param modal
    ///
    virtual void ShowPopupViewModel(ViewModelBase *viewModel,MCF_BOOL modal )=0;

};

//------------------------------------------
//define the base class for view models
class MCFC_API ViewModelBase:public QObject
{
    Q_OBJECT
public:
    ViewModelBase(QObject *parent=NULL);
    virtual ~ViewModelBase();
    static void SetGlobalMessageView(IMessageView *view);
    static void SetGlobalPopupHandler(IPopupViewHandler *handler);
public:
    static void Info(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
    static void Info(const QString & text, const QString & caption = "");
    static void Warning(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
    static void Warning(const QString & text, const QString & caption = "");
    static void Error(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
    static void Error(const QString & text, const QString & caption = "");
    static MessageResult Question(const MCF_STRING & text, const MCF_STRING & caption = _L(""));
    static MessageResult Question(const QString & text, const QString & caption = "");

    static void Popup(ViewModelBase *viewModel,MCF_BOOL modal);
private:
    static IMessageView *g_msgView;
    static IPopupViewHandler *g_popuphandler;
};
//------------------------------------------------
class MCFC_API ErrorStateViewModel:public ViewModelBase
{
 Q_OBJECT
public:
    ErrorStateViewModel(QObject *parent=NULL);
    virtual~ErrorStateViewModel();

    void SetErrors(const std::vector<MCF_RESPONSE> &errors);
    const std::vector<MCF_RESPONSE> &Errors()const {return _errors;}
public slots:
    void ClearErrors();
    void MuteBuzzer();

private:
    std::vector<MCF_RESPONSE> _errors;
};
















NS_MCFC_END





#endif // VIEWMODELBASE_H
