#include "Ring.h"

Ring::Ring(double internalRadius, double externalRadius, Point* center)
{
	SetRadii(internalRadius, externalRadius);
	SetCenter(center);
	AllRingsCount++;
}

void Ring::SetRadii(double internalRadius, double externalRadius)
{
	DoubleValidator::AssertPositiveValue(internalRadius);
	DoubleValidator::AssertPositiveValue(externalRadius);

	DoubleValidator::AssertValueInRange(internalRadius,
		MIN_RADIUS_VALUE, externalRadius);

	this->_internalRadius = internalRadius;
	this->_externalRadius = externalRadius;
}

void Ring::SetCenter(Point* center)
{
	this->_center = center;
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}

double Ring::GetInternalRadius()
{
	return this->_internalRadius;
}

double Ring::GetExternalRadius()
{
	return this->_externalRadius;
}

Point* Ring::GetCenter()
{
	return this->_center;
}

double Ring::GetArea()
{
	double area;
	area = GetExternalRadius() * GetExternalRadius() * M_PI
		- GetInternalRadius() * GetInternalRadius() * M_PI;
	return area;
}

Ring::~Ring()
{
	AllRingsCount--;
}
