#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{
	return value > 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return (value > min) && (value < max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsValuePositive(value))
	{
		throw exception("value non positive");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw exception("value non in range");
	}
}