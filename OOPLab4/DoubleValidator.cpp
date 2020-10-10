#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{ //TODO: булева слепота. Сократить реализацию метода до одной строчки кода
	return value > 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	//TODO: булева слепота. Сократить реализацию метода до одной строчки
	return (value > min) && (value < max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	//TODO: булева слепота, упростить условие
	if (!IsValuePositive(value))
	{
		throw exception("value non positive");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	//TODO: булева слепота, упростить условие
	if (!IsValueInRange(value, min, max))
	{
		throw exception("value non in range");
	}
}