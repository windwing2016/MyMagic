#ifndef USER_H
#define USER_H

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>


NS_MCFC_BEGIN

///
/// \brief Defines user roles.
///
enum UserRole
{
    UserRoleVmAdmin = 0x0,      // Vuette admin, role with highest access rights.
    UserRoleVmEngineer = 0x1,   // Vuette engineer.
    UserRoleAdmin = 0x2,        // User admin.
    UserRoleEngineer = 0x3,     // User engineer.
    UserRoleOperator = 0x4,     // Operator.
    UserRoleUnknown = 0xFF      // Unknown.
};


///
/// \brief Define a system user
///

class MCFC_API User
{
public:
    User();
    User(const MCF_STRING &name,const MCF_STRING &dispalyName,UserRole role);

public:
    const MCF_STRING &Name()const {return _name;}
    const MCF_STRING &DisplayName(){return _displayName;}
    UserRole Role()const{return _role;}

    void operator =(const User &user);
private:
    MCF_STRING _name;
    MCF_STRING _displayName;
    UserRole _role;


};







NS_MCFC_END





#endif // USER_H
