#include "Lab1_Tasks.h"

double GetPowerTask_1132(double base, int exponent)
{
	cout << " ";
	double result = 1;

	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

void Task_1132()
{
	double base;
	int exponent;
	double result;

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter base: ";
		cin >> base;
		cout << "Enter exponent: ";
		cin >> exponent;
		result = GetPowerTask_1132(base, exponent);
		cout << base << " ^ " << exponent << " = " << result << endl;
	}
}