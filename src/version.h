
#ifndef _VERSION_INCLUDED_
#define _VERSION_INCLUDED_


class Version
{
public:
   virtual ~Version() {};

public:
   virtual int getMinVersion() = 0;
   virtual int getMajorVersion() = 0;
   virtual int getBuildVersion() = 0;
};

#endif /* _VERSION_INCLUDED_ */
