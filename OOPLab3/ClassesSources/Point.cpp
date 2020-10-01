#include "../ClassesHeaders/Point.h"

void Point::SetX(double x)
{
	this->_x = x;
}

void Point::SetY(double y)
{
	this->_y = y;
}

Point::Point(double x, double y)
{
	SetX(x);
	SetY(y);
}

double Point::GetX()
{
	return this->_x;
}

double Point::GetY()
{
	return this->_y;
}
