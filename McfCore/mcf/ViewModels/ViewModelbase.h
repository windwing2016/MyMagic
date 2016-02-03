#ifndef VIEWMODELBASE_H
#define VIEWMODELBASE_H

#include <vector>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf/ViewModels/IMessageView.h>


NS_MCFC_BEGIN

class ViewModelBase;   //declaration the ViewModelBase class  not define the class

//-------------------------------------------

//define a popup view-view model binder
class MCFC_API IPopupViewHandler
{
public:
    virtual void ShowPopupViewModel(ViewModelBase *viewmodel,MCF_BOOL modal )=0;


};

//------------------------------------------
//define the base class for view models


















NS_MCFC_END





#endif // VIEWMODELBASE_H
