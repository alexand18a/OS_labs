#pragma once
#include "Number.h"

#ifdef VECTORLIBRARY_EXPORTS
#define VECTORLIBRARY_API __declspec(dllexport)
#else
#define VECTORLIBRARY_API __declspec(dllimport)
#endif

class VECTORLIBRARY_API Vector {
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