#ifndef MCFCONTEXT_H
#define MCFCONTEXT_H

#include <string>
#include <memory>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../McfCore/IDrive.h>
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>
#include <../McfCore/mcf/ViewModels/ViewModelbase.h>


NS_MCFC_BEGIN

class MCFC_API McfContext:public QObject
{
    Q_OBJECT
public:
    static void SetContext(McfContext *context);

    template<typename T>
    static T *Current()
    {
        return reinterpret_cast<T*>(_context);
    }

    static McfContext *Current();


    //Get the system folder paths
    static MCF_STRING GetBinFolder();
    static MCF_STRING GetConfigFolder();   //get system config folder
    static MCF_STRING GetDataFolder();     //
    static MCF_STRING GetLogFolder();
    static MCF_STRING GetLangFolder();
   // static MCF_STRING GetAppVersion();

    void GetDrivers(vector<IDriver *> &drivers);

    virtual ~McfContext();

    virtual MCF_BOOL Initialize()=0;

   // MCF_BOOL GetEMOResquest();

    void SetEMORequest(MCF_BOOL request);

    virtual std::string DDEServeName() const =0;

    virtual void EnableMouleList()=0;

    virtual void DisableMouleList()=0;
 protected:
    McfContext();


// data  member
public:
    IntProperty MachineStatus;
private:
    static McfContext *_context;
    MCF_BOOL _EMORequest;
    QMutex _lock;
    ViewModelBase *_mainViewModel;



};







NS_MCFC_END








#endif // MCFCONTEXT_H
