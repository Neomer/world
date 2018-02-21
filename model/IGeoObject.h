#ifndef IGEOOBJECT_H
#define IGEOOBJECT_H

#include <core/types/Coordinates.h>
#include <model/IObject.h>

///
/// \brief IGeoObject объект, находящийся в мире, имеющий координаты в пространстве
///
class IGeoObject : IObject
{
public:
    IGeoObject();
    IGeoObject(Coordinates position);

    Coordinates &getPosition() { return _coordinates; }

private:
    Coordinates _coordinates;
};

#endif // IGEOOBJECT_H
