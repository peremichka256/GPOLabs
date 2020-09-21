#include "Lab1_Tasks.h"

void RoundToTens(int& value)
{
	int remainder = value % 10;

	if (remainder < 5)
	{
		value /= 10;
		value *= 10;
	}
	else
	{
		value /= 10;
		value++;
		value *= 10;
	}
}

void Task_1134()
{
	int value;

	for (int i = 0; i < 3; i++)
	{
		cout << "For ";
		cin >> value;
		RoundToTens(value);
		cout << "rounded value is " << value << endl;
	}
}