#include "PeopleManager.hpp"

PeopleManager::PeopleManager(QObject *parent)
    : AbstractManager(parent)
{}

void PeopleManager::reset()
{
    mModel.reset();
}

bool PeopleManager::initialize()
{
    mockData();

    return true;
}

PeopleModel* PeopleManager::model()
{
    return &mModel;
}

void PeopleManager::mockData()
{
    for (int i = 0; i < 10; i++) {
        Person item;
        item.setId(i);
        item.setName(QString("Name %1").arg(i));
        mModel.appendItem(item);
    }
}
