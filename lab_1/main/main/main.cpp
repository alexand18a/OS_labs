#include <iostream>
#include "Number.h"
#include "Vector.h"

int main()
{
    Number a(3);
    Number b(7);
    Vector vec1(a * b, 13);
    Vector vec2(createNumber(-7), ONE);
    Vector vec3;
    vec3 = (vec1 + vec2);
    Number fi = vec3.angle_coordinate();
    Number r = vec3.radius_coordinate();
    std::cout << "radius = " << r.getNumber() << "\n" << "angle = " << fi.getNumber() << "\n";
}