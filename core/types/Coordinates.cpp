#include "Coordinates.h"

Coordinates::Coordinates() :
    _x(0), _y(0)
{

}

Coordinates::Coordinates(const Coordinates &other) :
    _x(other._x), _y(other._y)
{

}

Coordinates::Coordinates(double x, double y) :
    _x(x), _y(y)
{

}
