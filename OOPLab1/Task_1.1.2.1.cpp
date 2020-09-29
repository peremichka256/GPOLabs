#include "Lab1_Tasks.h"

void Task_1121()
{
	//TODO: размер массива вынести в константу, в объявлении массива и в циклах использовать константу
	int array[ARRAY_SIZE_TASK1121] = { 3, 7, 1,-5,0,2,8,-8,9,-3 };
	cout << "Source array is:" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < ARRAY_SIZE_TASK1121 - 1; i++)
	{
		for (int j = 0; j < ARRAY_SIZE_TASK1121 - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	cout << "Sorted array is:" << endl;

	for (int i = 0; i < ARRAY_SIZE_TASK1121; i++)
	{
		cout << array[i] << " ";
	}
}