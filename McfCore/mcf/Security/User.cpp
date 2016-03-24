#include "User.h"
using namespace Mcf;

//----------------------------------
User::User()
{
    _name=_L("");
    _displayName=_L("");
    _role=UserRoleUnknown;
}
//-------------------------------
User::User(const MCF_STRING &name, const MCF_STRING &dispalyName, UserRole role)
{
    _name=name;
    _displayName=dispalyName;
    _role=role;
}
//-------------------------------------------
void User::operator =(const User &user)
{
    _name=user._name;
    _displayName=user._displayName;
    _role=user._role;
}
