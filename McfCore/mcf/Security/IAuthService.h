#ifndef IAUTHSERVICE_H
#define IAUTHSERVICE_H
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>

NS_MCFC_BEGIN

class MCFC_API IAuthService
{
    virtual void GetCachedUser(MCF_STRING & userName, MCF_STRING & password) = 0;
    virtual MCF_RESPONSE LoginUser(const MCF_STRING & userName, const MCF_STRING & password, MCF_BOOL rememberMe) = 0;
    virtual MCF_RESPONSE LogoutUser() = 0;

};

class MCFC_API DefaultAuthService:public IAuthService
{
    virtual void GetCachedUser(MCF_STRING & userName, MCF_STRING & password);
    virtual MCF_RESPONSE LoginUser(const MCF_STRING & userName, const MCF_STRING & password, MCF_BOOL rememberMe);
    virtual MCF_RESPONSE LogoutUser();
};



NS_MCFC_END




#endif // IAUTHSERVICE_H
