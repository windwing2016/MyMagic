#ifndef INITVIEWMODELS_H
#define INITVIEWMODELS_H
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf.h>
#include <../McfCore/mcf/ViewModels/ViewModelbase.h>
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>
#include <QThread>
#include  "../Magic.h"


NS_MCFC_BEGIN

using namespace std;
using namespace Mcf;


class MAGIC_API LoginViewModel :public ViewModelBase
{
    Q_OBJECT
public:
    LoginViewModel(MCF_BOOL isInit = MCF_FALSE, QObject* parent = NULL);

    virtual ~LoginViewModel();
private:
    MCF_BOOL _isInit;

};






NS_MCFC_END



#endif // INITVIEWMODELS_H
