#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "systeminfo.h"
#include <QDebug>

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    systemInfo* sys = new systemInfo();
    sys->exportToXmlFile();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    sys->release(sys);

    return app.exec();
}
