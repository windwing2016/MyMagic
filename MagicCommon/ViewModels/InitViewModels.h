#ifndef INITVIEWMODELS_H
#define INITVIEWMODELS_H
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf.h>
#include <../McfCore/mcf/ViewModels/ViewModelbase.h>
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>
#include <QThread>
#include  "../Magic.h"
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>


NS_MCFC_BEGIN

using namespace std;
using namespace Mcf;


class MAGIC_API LoginViewModel :public ViewModelBase
{
    Q_OBJECT
public:
    LoginViewModel(MCF_BOOL isInit = MCF_FALSE, QObject* parent = NULL);

    virtual ~LoginViewModel();

signals:
    void StartupRequested();

    ///
    /// \brief Raised during system init, when logged in user is a normal user.
    /// \param option Initialization option.
    ///
    void InitRequested(MCF_BYTE option);

    ///
    /// \brief Raised when shutdown is requested.
    ///
    void ShutdownRequested();

    ///
    /// \brief RestoreContentRequested
    ///
    void RestoreContentRequested();

    ///
    /// \brief Raised when input focus change is required.
    /// \param userName MCF_TRUE if to set user name focused, otherwise, to set password focused.
    ///
    void FocusChangeRequested(MCF_BOOL userName);

    ///
    /// \brief SaveCacheUserRequested
    ///
    void SaveCacheUserRequested(MCF_BOOL rememberMe);

    ///
    /// \brief LoadCacheUserRequested
    ///
    void LoadCacheUserRequested(MCF_STRING & userName, MCF_STRING & password);
public slots:
    void Login();
    void Cancel();

public:
    StringProperty  UserName;
    StringProperty  Password;
    BoolProperty  RemmberMe;
private:
    MCF_BOOL _isInit;

};






NS_MCFC_END



#endif // INITVIEWMODELS_H
