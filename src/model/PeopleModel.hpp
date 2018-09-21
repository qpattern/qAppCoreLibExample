#ifndef __PEOPLE_MODEL_HPP_
#define __PEOPLE_MODEL_HPP_

#include <QAbstractListModel>

#include "Person.hpp"

class PeopleModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum Roles {
        ROLE_ID = Qt::UserRole + 1,
        ROLE_NAME
    };

    explicit PeopleModel(QObject* parent = nullptr);

    QVariant                data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
    QHash<int, QByteArray>  roleNames() const override;
    int                     rowCount(const QModelIndex& parent = QModelIndex()) const override;

public slots:
    void appendItem(const Person& item);
    void reset();

private:
    QList<Person> mList;
};
#endif // __PEOPLE_MODEL_HPP_
