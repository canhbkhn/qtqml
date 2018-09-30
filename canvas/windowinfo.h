#ifndef WINDOWINFO_H
#define WINDOWINFO_H

#include "windows.h"
#include <iostream>
#include "inforsystem.h"

class windowinfo : public inforsystem
{
public:
    windowinfo();

    void update();

    ULONGLONG convertFileTime(const FILETIME& filetime) const;

private:
    FILETIME idleTime;
    FILETIME kernelTime;
    FILETIME userTime;

    FILETIME last_idleTime;
    FILETIME last_kernelTime;
    FILETIME last_userTime;
};

#endif // WINDOWINFO_H
