#include "windowinfo.h"

windowinfo::windowinfo()
{
    //get memory total
    MEMORYSTATUSEX memoryStatus;
    memoryStatus.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memoryStatus);
    this->setTotalCpu(memoryStatus.ullAvailPhys/1024/1024);

    //get system time
    GetSystemTimes(&this->last_idleTime,
                   &this->last_kernelTime,
                   &this->last_userTime);
}
void windowinfo::update()
{

}
