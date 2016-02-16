#ifndef GETAPPLICATIONPATH_H
#define GETAPPLICATIONPATH_H


#include <string>
#include <string.h>
#include <QString>
#include <Windows.h>
#include <stdio.h>
#include <../McfCore/mcf.h>


MCF_STRING  GetBinFolder()
{
   MCF_TCHAR filePath[MAX_PATH];
   HMODULE module=::GetModuleHandle(NULL);
   if(module==NULL)
   {
      return _L("");
   }
   if (!::GetModuleFileName(module, filePath, MAX_PATH))
   {
       return _L("");
   }
   MCF_STRING exeFilePath = filePath;
   MCF_STRING directory = _L("");
   MCF_STRING fileName = _L("");
   const size_t last_slash_idx = exeFilePath.rfind('\\');
   if (std::string::npos != last_slash_idx)
   {
       directory = exeFilePath.substr(0, last_slash_idx);
       fileName = exeFilePath.substr(last_slash_idx + 1);
   }

   return directory;

}

//-----------------------------------
void Call_GetBinFolder()
{
   MCF_STRING directory=GetBinFolder();
   std::wcout<<directory<<endl;
}








#endif // GETAPPLICATIONPATH_H
