#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <control/ApplicationManager.hpp>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    ApplicationManager applicationManager("qrc:/main.qml");
    applicationManager.initialize();

    return QGuiApplication::exec();
}
