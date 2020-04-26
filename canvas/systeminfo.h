#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include <QObject>
#include <QString>
#include <QDebug>

class systemInfo : public QObject
{
    Q_OBJECT
public:
    explicit systemInfo(QObject *parent = nullptr);
    //export hardware system informations to html
    inline void exportToHtmlFile(){
        qDebug() << "export to html file \n";
        system("sudo lshw -html > hardwareinfo.html");
    }
    // export hardware system informations to json
    inline void exportToJsonFile(){
        qDebug() << "export to json file \n";
        system("sudo lshw -json > hardwareinfo.json");
    }
    // export hardware system informations to xml
    inline void exportToXmlFile(){
        qDebug() << "export to xml file \n";
        system("sudo lshw -xml > hardwareinfo.xml");
    }

    void ReadFileHtml(QString& filePath){

    }

    void ReadFileJson(QString& filePath){

    }

    void ReadFileXml(QString& filePath){

    }

    QString getCpuUsage() const;
    QString getRamUsage() const;

    void update(QString& _cpuUsage, QString& _ramUsage);

    void release(systemInfo* object){
        if(object != nullptr){
            delete object;
            object = nullptr;
        }
    }

signals:
private:
    QString cpuUsage;
    QString ramUsage;
};

#endif // SYSTEMINFO_H
