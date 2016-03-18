#include "InitViewModels.h"
#include <../McfCore/mcf/Log/ILogger.h>

using namespace Mcf;
using namespace Magic;


LoginViewModel::LoginViewModel(MCF_BOOL isInit, QObject *parent)
              :ViewModelBase(parent),_isInit(isInit)
{

}
//------------------------------------
LoginViewModel::~LoginViewModel()
{

}
