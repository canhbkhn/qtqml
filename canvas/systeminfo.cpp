#include "systeminfo.h"

systemInfo::systemInfo(QObject *parent) : QObject(parent)
{

}

QString systemInfo::getCpuUsage() const{
    return cpuUsage;
}

QString systemInfo::getRamUsage() const{
    return ramUsage;
}
