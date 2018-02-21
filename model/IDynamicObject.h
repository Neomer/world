#ifndef IDYNAMICOBJECT_H
#define IDYNAMICOBJECT_H

#include "IGeoObject.h"


///
/// \brief IDynamicObject объект, который может изменять свое положение в пространстве
///
class IDynamicObject : public IGeoObject
{
public:
    IDynamicObject();
};

#endif // IDYNAMICOBJECT_H
