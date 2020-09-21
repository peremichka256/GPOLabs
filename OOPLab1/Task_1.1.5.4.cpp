#include "Lab1_Tasks.h"

void SortArray(double* array, int size)
{
	double temporaryElement;

	for (int i = 0; i < size; i++)
	{
		for (int j = (size - 1); j >= (i + 1); j--)
		{
			if (array[j] < array[j - 1])
			{
				temporaryElement = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temporaryElement;
			}
		}
	}
}

void Task_1154()
{
	int arraySize = 12;
	double* doubleArray = new double[arraySize]
	{ -8.4,6.4,-0.54,-3.678,6.98,1.56,3.05,-5.32,9.65,7 ,-9.8,-9.9};
	cout << "Array of double: " << endl;

	for (int i = 0; i < arraySize; i++)
	{
		cout << doubleArray[i] << " ";
	}

	SortArray(doubleArray, arraySize);

	cout << endl << "Sorted array of double: " << endl;

	for (int i = 0; i < arraySize; i++)
	{
		cout << doubleArray[i] << " ";
	}
	delete[] doubleArray;
	doubleArray = nullptr;
}