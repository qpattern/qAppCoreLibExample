#include "ApplicationManager.hpp"

#define QML_TYPES_PACKAGE_NAME "App"
#define ERROR_MESSAGE          QString("Unable to register uncreatable type: %1")

ApplicationManager::ApplicationManager(const QString& qmlFile, QObject* parent)
    : AbstractApplicationManager(qmlFile, parent)
{}

void ApplicationManager::reset()
{
    mPeopleManager.reset();
}

bool ApplicationManager::initializeManagers()
{
    bool result;

    result = mPeopleManager.initialize();

    return result;
}

void ApplicationManager::registerMetatypes()
{
    qmlRegisterUncreatableType<PeopleModel>(QML_TYPES_PACKAGE_NAME, 1, 0, "PeopleModel", ERROR_MESSAGE.arg("TilesManager"));

    mViewManager.setContextProperty("peopleManager", &mPeopleManager);
}
