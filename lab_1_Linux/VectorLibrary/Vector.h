#ifndef VECTORLIBRARY_VECTOR_H
#define VECTORLIBRARY_VECTOR_H

#include "Number.h"

class Vector {
public:
    Vector() : x(ONE), y(ZERO) {};
    Vector(Number x, Number y);
    Vector operator+(Vector vec1);
    Number radius_coordinate();
    Number angle_coordinate();

private:
    Number x;
    Number y;
};

#endif //VECTORLIBRARY_VECTOR_H
