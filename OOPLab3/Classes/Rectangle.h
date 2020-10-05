#pragma once
#include "Point.h"

class Rectangle
{
private:
	double _length;
	double _width;
	Point* _center;

public:
	Rectangle();
	Rectangle(double length, double width, Point* center);
	void SetLength(double length);
	void SetWidth(double width);
	void SetCenter(Point* center);
	double GetLength();
	double GetWidth();
	Point* GetCenter();
};

