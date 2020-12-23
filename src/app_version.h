
#ifndef _APP_VERSION_INCLUDED_
#define _APP_VERSION_INCLUDED_


//#include <iostream>
#include <string>

#include "version.h"


class AppVersion : Version
{
public:
   static AppVersion & getInstance();

private:
   AppVersion(); 

   AppVersion(AppVersion const&);
   void operator=(AppVersion const&);

   void getVersions();

   int min_version_;
   int major_version_;
   int build_version_;   

   std::string full_version_;

public:
   int getMinVersion();
   int getMajorVersion();
   int getBuildVersion();   
   std::string getFullVersion();

   //std::ostream& operator<<(const AppVersion& appVersion);
};


#endif /* _APP_VERSION_INCLUDED_ */
