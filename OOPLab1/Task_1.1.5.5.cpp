#include "Lab1_Tasks.h"

int FindByLineSearch(int searchingValue, int* array)
{
	for (int i = 0; i < 10; i++)
	{
		if (array[i] == searchingValue)
		{
			return i;
		}
	}
}

void Task_1155()
{
	int* array = new int[10]{ 6,3,7,12,-56,32,1,6,67,-43 };
	cout << "Int array: ";

	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << "Enter searching value: ";
	int searchingValue;
	cin >> searchingValue;

	int searchedIndex = FindByLineSearch(searchingValue, array);
	cout << endl << "Index of searching value: "
		<< searchingValue << " is: " << searchedIndex;
	delete[] array;
	array = nullptr;
}