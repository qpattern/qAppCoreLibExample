#ifndef __APPLICATION_MANAGER_HPP_
#define __APPLICATION_MANAGER_HPP_

#include <qAppCoreLib/controller/AbstractApplicationManager.h>

#include "PeopleManager.hpp"

class ApplicationManager: public AbstractApplicationManager
{
    Q_OBJECT

public:
    explicit ApplicationManager(const QString& qmlFile, QObject* parent = nullptr);

    virtual void reset()              override;

    virtual bool initializeManagers() override;
    virtual void registerMetatypes()  override;

private:
    PeopleManager mPeopleManager;
};
#endif // __APPLICATION_MANAGER_HPP_
