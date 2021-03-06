#ifndef IDRIVE_H
#define IDRIVE_H

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>

NS_MCFC_BEGIN

using namespace   std;

class MCFC_API IDriver :public QObject
{
    Q_OBJECT
public:
    IDriver(QObject *parent=NULL):QObject(parent){}
    virtual ~IDriver(){}

    // Initialization / uninitialization.

    virtual MCF_RESPONSE Initialize() = 0;
    virtual MCF_RESPONSE Deinitialize() = 0;

    virtual MCF_RESPONSE ClearErrors() = 0;
public:
    virtual void ExecuteEmo(){}

};


NS_MCFC_END


#endif // IDRIVE_H
