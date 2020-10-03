#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double length, double width, Point* center)
{
	SetLength(length);
	SetWidth(width);
	SetCenter(center);
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
	this->_width = width;
}

void Rectangle::SetCenter(Point* center)
{
	this->_center = center;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

Point* Rectangle::GetCenter()
{
	return this->_center;
}
