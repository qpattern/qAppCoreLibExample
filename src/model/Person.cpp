#include "Person.hpp"

#include <QDebug>

Person::Person()
    : mId(0)
{}

int Person::id() const
{
    return mId;
}

bool Person::setId(int value)
{
    if (mId != value) {
        qDebug() << ("Changing value from") << mId << "to" << value;
        mId = value;
        return true;
    }
    return false;
}

const QString& Person::name() const
{
    return mName;
}

bool Person::setName(const QString& value)
{
    if (mName != value) {
        qDebug() << ("Changing value from") << mName << "to" << value;
        mName = value;
        return true;
    }
    return false;
}
