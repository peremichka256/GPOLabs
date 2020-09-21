#include "Lab1_Tasks.h"

void Task_1123()
{
	char array[8];
	cout << "Enter array of 8 chars" << endl;

	for (int i = 0; i < 8; i++)
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

	for (int i = 0; i < 8; i++)
	{
		if ((array[i] >= 97) && (array[i] <= 122))
		{
			cout << array[i] << " ";
		}
	}
}