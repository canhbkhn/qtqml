#ifndef INFORSYSTEM_H
#define INFORSYSTEM_H

#include <QObject>
#include "windows.h"
#include <iostream>


class inforsystem
{
public:
    inforsystem();
    ~inforsystem(){}


    //Cpu total get from system
    double getTotalCpu();
    void setTotalCpu(double total);

    //Memory total get from system
    double getTotalMem();
    void setTotalMem(double total);

    //Cpu usage
    void setCpuUsage(double);
    int getCpuUsage();

    //Memory information
    void setRamUsage(double);
    int getRamUsage();

private:
    double CpuTotal;
    double MemoryTotal;

    double m_CpuUsage;
    double m_RamUsage;
};

#endif // INFORSYSTEM_H
