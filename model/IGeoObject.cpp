#include "IGeoObject.h"

IGeoObject::IGeoObject() :
    IObject()
{

}

IGeoObject::IGeoObject(Coordinates position) :
    _coordinates(position)
{

}
