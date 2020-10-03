#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
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
	if (IsValuePositive(value) != true)
	{
		throw exception("Error");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (IsValueInRange(value, min, max) != true)
	{
		throw exception("Error");
	}
}