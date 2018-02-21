#ifndef COORDINATES_H
#define COORDINATES_H

#include <math.h>

class Coordinates
{
public:
    Coordinates();
    Coordinates(const Coordinates &other);
    Coordinates(double x, double y);

    double getX() { return _x; }
    void setX(double value) { _x = value; }

    double getY() { return _y; }
    void setY(double value) { _y = value; }

    double distanceTo(const Coordinates &other) { return sqrt((_x - other._x) * (_x - other._x) + (_y - other._y) * (_y - other._y)); }

private:
    double _x, _y;
};

#endif // COORDINATES_H
