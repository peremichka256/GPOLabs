#pragma once
#include "Point.h"
#include "DoubleValidator.h"

const int MIN_RADUIS_VALUE = 0;
const int PI = 3.14;

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
