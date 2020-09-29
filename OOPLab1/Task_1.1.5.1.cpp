#include "Lab1_Tasks.h"

void Task_1151()
{
	int size = 8;
	double* testArray = new double[size];

	for (int i = 0; i < size; i++)
	{
		testArray[i] = (rand() % 100)/1.6;
	}
	cout << "Array of double: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << testArray[i] << " ";
	}
	delete[] testArray;
}