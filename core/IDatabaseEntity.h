#ifndef IDATABASEENTITY_H
#define IDATABASEENTITY_H

#include <core/types/Guid.h>
#include <core/DatabaseTransferObject.h>

#include <QString>

class IDatabaseEntity : public QObject
{
    Q_OBJECT

public:
    ///
    /// \brief serialize заполняет таблицу object
    /// \param object
    ///
    virtual void serialize(DatabaseTransferObject &object) = 0;
};

#endif // IDATABASEENTITY_H
