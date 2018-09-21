#include "PeopleModel.hpp"

#include <QDebug>

PeopleModel::PeopleModel(QObject *parent) : QAbstractListModel(parent)
{}

QVariant PeopleModel::data(const QModelIndex& index, int role) const
{
    int row = index.row();
    Q_ASSERT(0 <= row && row < mList.size());
    if (0 <= row && row < mList.size()) {
        const Person& item = mList.at(row);
        switch (role) {
            case ROLE_ID   : return item.id();
            case ROLE_NAME : return item.name();

            default:
                qWarning() << ("Unknown role:") << role;
                Q_ASSERT(false);
                break;
        }
    }
    return QVariant();
}

QHash<int, QByteArray> PeopleModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ROLE_ID]   = "id";
    roles[ROLE_NAME] = "name";
    return roles;
}

int PeopleModel::rowCount(const QModelIndex&) const
{
    return mList.size();
}

void PeopleModel::appendItem(const Person& item)
{
    int rowIndex = rowCount();
    beginInsertRows(QModelIndex(), rowIndex, rowIndex);
    mList.append(item);
    endInsertRows();
}

void PeopleModel::reset()
{
    beginResetModel();
    mList.clear();
    endResetModel();
}
