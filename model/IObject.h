#ifndef IOBJECT_H
#define IOBJECT_H

#include <core/types/Guid.h>

#include <QString>

///
/// \brief IObject объект мира, имеющий идентификатор
///
class IObject
{
private:
    QString _name;
    Guid _id;

public:
    IObject();

    Guid getId() { return _id; }
    void setId(Guid value) { _id = value; }
    ///
    /// \brief getName отображаемое наименование объекта
    /// \return
    ///
    QString getName() { return _name; }
};

#endif // IOBJECT_H
