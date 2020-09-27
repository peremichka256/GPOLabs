#include "Lab1_Tasks.h"

//TODO: неправильное название, не показывает что именно ищется в массиве
int FindByLineSearch(int searchingValue, int* array)
{//TODO: почему до 10? Сделать функцию, которая ищет значение в любом массиве
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
	//TODO: размер массива вынести в переменную, в объявлении массива и в циклах использовать переменную
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