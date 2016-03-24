#include "IAuthService.h"
#include <../McfCore/McfContext.h>
#include <boost/algorithm/string.hpp>
#include "SimpleCrypt.h"
#include "User.h"
#include <QObject>
#include <QString>
#include <QFile>

using namespace Mcf;

#define TR(x)  MCF_TRANSLATE("DefaultAuthService",x)
//-----------------------------------------
DefaultAuthService::DefaultAuthService()
{
    QT_TRANSLATE_NOOP("DefaultAuthService", "Either user name or password is incorrect, please enter valid user name and password.");
    QT_TRANSLATE_NOOP("DefaultAuthService", "Encountered an error when Load user information, please try again.");
    QT_TRANSLATE_NOOP("DefaultAuthService", "Encountered an error when save default user information, please try again.");
}
//--------------------------------------------
void DefaultAuthService::GetCachedUser(MCF_STRING &userName, MCF_STRING &password)
{
    userName = _L("Admin");
    password = _L("admin");
}
//----------------------------------
MCF_RESPONSE DefaultAuthService::LoginUser(const MCF_STRING &userName, const MCF_STRING &password, MCF_BOOL rememberMe)
{
    (void*)rememberMe;
 //   MCF_RESPONSE error(TR("Either user name or password is incorrect, please enter valid user name and password."),McfResponseError);
    MCF_RESPONSE error(TR("Either user name or password is incorrect, please enter valid user name and password."), McfResponseError);
    MCF_RESPONSE loadError(TR("Encountered an error when load user information, please try again."), McfResponseError);
    MCF_RESPONSE saveError(TR("Encountered an error when save default user information, please try again."), McfResponseError);

    UserRole role=UserRoleUnknown;
    MCF_STRING ciUserName=boost::to_upper_copy(userName);  //  upper and lower change  to_upper_copy is changeto upper
    MCF_STRING displayName=_L("");



}
