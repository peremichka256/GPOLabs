#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include "Point.h"
#include "DoubleValidator.h"
//TODO: грамошибка
const int MIN_RADIUS_VALUE = 0; 
//TODO: точность до второго знака в инженерии - слишком мало. Вообще, надо стараться получать как можно большую точность в расчетах
//TODO: используй значение Пи из стандартной библиотеки, там и точность выше, и собственные константы заводить не надо

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
