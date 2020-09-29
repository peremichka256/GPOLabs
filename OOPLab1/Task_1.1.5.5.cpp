#include "Lab1_Tasks.h"

//TODO: неправильное название, не показывает что именно ищется в массиве
int FindValueByLineSearch(int searchingValue, int* array, int arraySize)
{//TODO: почему до 10? Сделать функцию, которая ищет значение в любом массиве
	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == searchingValue)
		{
			return i;
		}
	}
}

void Task_1155()
{
	//TODO: размер массива вынести в переменную, в объявлении массива и в циклах использовать переменную
	int arraySize = 10;
	int* array = new int[arraySize]{ 6,3,7,12,-56,32,1,6,67,-43 };
	cout << "Int array: ";

	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl << "Enter searching value: ";
	int searchingValue;
	cin >> searchingValue;

	int searchedIndex = FindValueByLineSearch(searchingValue, array, arraySize);
	cout << endl << "Index of searching value: "
		<< searchingValue << " is: " << searchedIndex;
	delete[] array;
}