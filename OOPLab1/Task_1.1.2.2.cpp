#include "Lab1_Tasks.h"

void Task_1122()
{
	//TODO: размер массива вынести в константу, в объявлении массива и в циклах использовать константу
	double array[12] = { 3.54, 7.9, 1.12, -5.53, 0.222, 2.43, 8.532, -8.87, 9.63, -3.42, 78.12, -90.0 };
	cout << "Source array is:" << endl;

	for (int i = 0; i < 12; i++)
	{
		cout << array[i] << " ";
	}

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			if (array[j] > array[j + 1])
			{
				double temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << endl << "Enter searching value: ";
	double searchingValue;
	cin >> searchingValue;
	int largerValueCounter = 0;

	for (int i = 0; i < 12; i++)
	{
		if (array[i] >= searchingValue)
		{
			largerValueCounter++;
		}
	}
	cout << "Elements of array more than " << searchingValue
		<< " is: " << largerValueCounter;
}