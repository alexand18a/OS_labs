#include "Vector.h"
#include <cmath>

Vector::Vector(Number x, Number y):x(x),y(y) {}

Number Vector::radius_coordinate() {
    return createNumber(sqrt((this->x * this->x + this->y * this->y).getNumber()));
}

Number Vector::angle_coordinate() {
    return createNumber(atan((this->y / this->x).getNumber()));
}

Vector Vector::operator+(Vector vec1) {
    return Vector(x + vec1.x, y + vec1.y);
}
