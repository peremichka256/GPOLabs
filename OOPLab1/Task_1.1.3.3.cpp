#include "Lab1_Tasks.h"

double GetPowerTask_1133(double base, int exponent)
{
	cout << " ";
	double result = 1;

	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

void DemoGetPower(double base, int exponent)
{
	double result = GetPowerTask_1133(base, exponent);
	cout << base << " ^ " << exponent << " = " << result << endl;
}

void Task_1133()
{
	double base;
	int exponent;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter exponent: ";
		cin >> exponent;
		DemoGetPower(base, exponent);
	}
}