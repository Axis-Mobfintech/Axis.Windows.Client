
#include <windows.h>
#include <tchar.h>

#include"app_version.h"


/*--------------------------------*/
void AppVersion::getVersions(void)
{
   TCHAR filename[MAX_PATH + 1] = { 0 };
   DWORD verBufferSize;
   char verBuffer[2048];
   int revision;

      
   min_version_ = major_version_ = build_version_ = 0;

   // get the filename of the executable containing the version resource
   if (GetModuleFileName(NULL, filename, MAX_PATH) == 0)
   {      
      return ;
   }

   //  Get the size of the version info block in the file
   verBufferSize = GetFileVersionInfoSize(filename, NULL);
   if (verBufferSize > 0 && verBufferSize <= sizeof(verBuffer))
   {
      //  get the version block from the file
      if (TRUE == GetFileVersionInfo(filename, NULL, verBufferSize, verBuffer))
      {
         UINT length;
         VS_FIXEDFILEINFO *verInfo = NULL;

         //  Query the version information for neutral language
         if (TRUE == VerQueryValue(verBuffer, _T("\\"), reinterpret_cast<LPVOID*>(&verInfo), &length))
         {
            //  Pull the version values.
            major_version_ = HIWORD(verInfo->dwProductVersionMS);
            min_version_ = LOWORD(verInfo->dwProductVersionMS);
            build_version_ = HIWORD(verInfo->dwProductVersionLS);
            //revision = LOWORD(verInfo->dwProductVersionLS);

            full_version_ = "v" + std::to_string(major_version_) + "." + std::to_string(min_version_) + "." + std::to_string(build_version_);            
            return ;
         }
      }
   }
}


// Singleton
AppVersion & AppVersion::getInstance()
{
   static AppVersion instance;   // Guaranteed to be destroyed.
                                 // Instantiated on first use.
   return instance;
}


// Private Constructor
AppVersion::AppVersion() : Version()
{
   getVersions();
}


void AppVersion::operator=(AppVersion const&)
{
}

int AppVersion::getMinVersion()
{
   return min_version_;
}

int AppVersion::getMajorVersion()
{
   return major_version_;
}

int AppVersion::getBuildVersion()
{
   return build_version_;
}

std::string AppVersion::getFullVersion()
{
   return full_version_;
}
