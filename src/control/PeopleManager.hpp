#ifndef __PEOPLE_MANAGER_HPP_
#define __PEOPLE_MANAGER_HPP_

#include <qAppCoreLib/controller/AbstractManager.h>

#include <model/PeopleModel.hpp>

class PeopleManager : public AbstractManager
{
    Q_OBJECT

    Q_PROPERTY(PeopleModel* model READ model CONSTANT)

public:
    explicit PeopleManager(QObject *parent = nullptr);

    virtual void reset()      override;
    virtual bool initialize() override;

    virtual PeopleModel* model();

private:
    void mockData();

    PeopleModel mModel;
};
#endif // __PEOPLE_MANAGER_HPP_
