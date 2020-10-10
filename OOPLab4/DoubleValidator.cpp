#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{ //TODO: булева слепота. Сократить реализацию метода до одной строчки кода
	if (value < 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	//TODO: булева слепота. Сократить реализацию метода до одной строчки
	if ((value < min) || (value > max))
	{
		return false;
	}
	else
	{
		return true;
	}
}

void DoubleValidator::AssertPositiveValue(double value)
{
	//TODO: булева слепота, упростить условие
	if (IsValuePositive(value) != true)
	{
		throw exception("value non positive");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	//TODO: булева слепота, упростить условие
	if (IsValueInRange(value, min, max) != true)
	{
		throw exception("value non in range");
	}
}