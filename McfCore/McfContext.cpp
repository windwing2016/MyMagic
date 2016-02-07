#include "McfContext.h"
#include <assert.h>
#include <Windows.h>
#include <../McfCore/IDrive.h>

using namespace Mcf;

//Initialize singleton context instance
McfContext *McfContext::_context=NULL;
// static of class variable must init;
//----------------------------------------------------
McfContext::McfContext()
{
   MachineStatus=-1;
   _EMORequest=MCF_FALSE;
   _mainViewModel=NULL;
}
//----------------------------------------
McfContext::~McfContext()
{

}
//------------------------------------------

void McfContext::SetContext(McfContext *context)
{
    if (context == NULL) throw std::invalid_argument("Null context specified.");
    // NOTE: this method is not thread safe. It should be called only once during system initialization.
    _context = context;
}
//----------------------------------------
McfContext* McfContext::Current()
{
    // Make sure set context is called before any call to this method!
    assert(_context != NULL);
    return _context;
}
//----------------------------------

MCF_STRING McfContext::GetBinFolder()
{
    MCF_TCHAR filePath[MAX_PATH];  //typedef wchar_t MCF_TCHAR; #define MAX_PATH  260
    HMODULE module=::GetModuleHandle(NULL);
    //notes:  GetModuleHandle function is get the application or dll's module handler
    //GetModuleHandle(NULL)  will return handler of the application self
    if(module==NULL)
    {
        return  _L("");   // if NULL not get the application module
    }
    if(!::GetModuleFileName(module,filePath,MAX_PATH));  //get the application path
    {
        return _L("");    // if false return null
    }
    // Get the directory where the process executable is located and the executable file name (without directory).
    MCF_STRING exeFilePath=filePath; //the application execute path
    MCF_STRING directory=_L("");
    MCF_STRING fileName=_L("");
    const size_t last_slash_idx=exeFilePath.rfind("\\");
    //note:  rfind is the string function is reverse lookup the string
    //return the taget char position
    //last_slash_idx value is "\\" at the string exefilepath
    if(std::string::npos!=last_slash_idx)
    {
        directory=exeFilePath.substr(0,last_slash_idx);
        fileName=exeFilePath.substr(last_slash_idx+1);
    }
    return directory;
}






