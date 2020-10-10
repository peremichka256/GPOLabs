#include "DoubleValidator.h"

bool DoubleValidator::IsValuePositive(double value)
{ //TODO: ������ �������. ��������� ���������� ������ �� ����� ������� ����
	return value > 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	//TODO: ������ �������. ��������� ���������� ������ �� ����� �������
	return (value > min) && (value < max);
}

void DoubleValidator::AssertPositiveValue(double value)
{
	//TODO: ������ �������, ��������� �������
	if (!IsValuePositive(value))
	{
		throw exception("value non positive");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	//TODO: ������ �������, ��������� �������
	if (!IsValueInRange(value, min, max))
	{
		throw exception("value non in range");
	}
}