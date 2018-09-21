#ifndef MODEL_PERSON_HPP
#define MODEL_PERSON_HPP

#include <QString>

class Person
{

public:
    explicit Person();
    virtual ~Person() = default;

    virtual int  id() const;
    virtual bool setId(int value);

    virtual const QString& name() const;
    virtual bool           setName(const QString& value);

private:
    int     mId;
    QString mName;
};

#endif // MODEL_PERSON_HPP
