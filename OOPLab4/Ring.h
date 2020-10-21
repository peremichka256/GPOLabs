#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include "Point.h"
#include "DoubleValidator.h"

const int MIN_RADIUS_VALUE = 0; 

class Ring
{
private:
	static int AllRingsCount;
	double _internalRadius;
	double _externalRadius;
	Point* _center;
public:
	Ring(double internalRadius, double externalRadius, Point* center);

	void SetRadii(double internalRadius, double externalRadius);
	void SetCenter(Point* center);

	static int GetAllRingsCount();
	double GetInternalRadius();
	double GetExternalRadius();
	Point* GetCenter();

	double GetArea();

	~Ring();
};
