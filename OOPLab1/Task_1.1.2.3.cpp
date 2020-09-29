#include "Lab1_Tasks.h"

void Task_1123()
{
	//TODO: размер массива вынести в константу, в объявлении массива и в циклах использовать константу
	char array[ARRAY_SIZE_TASK1123];
	cout << "Enter array of 8 chars" << endl;

	for (int i = 0; i < ARRAY_SIZE_TASK1123; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> array[i];
	}
	cout << "Your array is:" << endl;

	for (int i = 0; i < 8; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << "All letters in your array:" << endl;

	for (int i = 0; i < ARRAY_SIZE_TASK1123; i++)
	{
		//TODO: что за магические числа? Заменить на соответствующие символы
		if ((array[i] >= 'a') && (array[i] <= 'z'))
		{
			cout << array[i] << " ";
		}
	}
}