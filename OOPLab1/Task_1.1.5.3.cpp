#include "Lab1_Tasks.h"

void Task_1153()
{
	cout << "Enter char array size: ";
	int arraySize;
	cin >> arraySize;
	char* charArray = new char[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> charArray[i];
	}
	cout << endl << "Your char array is: " << endl;

	for (int i = 0; i < arraySize; i++)
	{
		cout << charArray[i] << " ";
	}
	delete[] charArray;
}