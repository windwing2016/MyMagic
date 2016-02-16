#include "McfContext.h"
#include <assert.h>
#include <Windows.h>
#include <../McfCore/IDrive.h>
#include <exception>

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
    const size_t last_slash_idx=exeFilePath.rfind('\\');
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
//-----------------------------------------------
MCF_STRING McfContext::GetConfigFolder()
{
   MCF_STRING binFolder=GetBinFolder();
   if(binFolder.length()==0)
       return _L("");
   return binFolder +_L("\\Config");

}

//------------------------------------
MCF_STRING McfContext::GetDataFolder()
{
    MCF_STRING binFolder=GetBinFolder();
    if(binFolder.length()==0)
        return _L("");
    //get the directory for data files
    MCF_STRING dataFolder=binFolder+_L("\\Data");
    //make sure the folder exists
    ::CreateDirectory(dataFolder.c_str(),NULL);
    return dataFolder;
}
//----------------------------------------------

MCF_STRING McfContext::GetLogFolder()
{
    MCF_STRING binFolder=GetBinFolder();
    if(binFolder.length()==0)
        return _L("");
    //get the directory for log files
    MCF_STRING logFolder=binFolder+_L("\\Log");
    //make sure the folder exists
    ::CreateDirectory(logFolder.c_str(),NULL);
    return logFolder;
}
//----------------------------------------------------
MCF_STRING McfContext::GetLangFolder()
{
    MCF_STRING binFolder = GetBinFolder();
    if (binFolder.length() == 0) return _L("");
    return binFolder + _L("\\Lang");
}
//---------------------------------------------------
//------------------------------------------------------------------------------------------------------
/*
MCF_STRING Mcf::McfContext::GetAppVersion()
{
    MCF_TCHAR filePath[MAX_PATH];
    HMODULE module = ::GetModuleHandle(NULL);
    if (module == NULL)
    {
        return _L("");
    }

    if (!::GetModuleFileName(module, filePath, MAX_PATH))
    {
        return _L("");
    }

    DWORD  verHandle = NULL;
    UINT   size      = 0;
    LPBYTE lpBuffer  = NULL;
    DWORD  verSize   = ::GetFileVersionInfoSize(filePath, &verHandle);


    if (verSize == NULL) return _L("");

    LPSTR verData = new char[verSize];

    MCF_STRINGSTREAM oss;
    if (::GetFileVersionInfo(filePath, verHandle, verSize, verData))
    {
        if (::VerQueryValue(verData, _L("\\"), (VOID FAR* FAR*)&lpBuffer, &size))
        {
            if (size)
            {
                VS_FIXEDFILEINFO *verInfo = (VS_FIXEDFILEINFO *)lpBuffer;
                if (verInfo->dwSignature == 0xfeef04bd)
                {
                    oss << ((verInfo->dwFileVersionMS >> 16) & 0xffff) << "."
                        << ((verInfo->dwFileVersionMS >>  0) & 0xffff) << "."
                        << ((verInfo->dwFileVersionLS >> 16) & 0xffff) << "."
                        << ((verInfo->dwFileVersionLS >>  0) & 0xffff);
                }
            }
        }
    }
    delete[] verData;
    return oss.str();
}
*/
//------------------------------------------------

