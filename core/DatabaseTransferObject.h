#ifndef DATABASETRANSFEROBJECT_H
#define DATABASETRANSFEROBJECT_H

#include <QMap>
#include <QVariant>

///
/// \brief DatabaseTransferObject промежуточная структура между IDatabaseEntity и Database. Хранит таблицу сопоставления колонка-значение для составления SQL-запроса.
///
class DatabaseTransferObject
{
    QMap<QString, QVariant> _data;

public:
    DatabaseTransferObject();

    void append(QString column, QVariant value) { _data[column] = value; }
};

#endif // DATABASETRANSFEROBJECT_H
