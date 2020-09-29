#include "Lab1_Tasks.h"
#include <ctime>

const int FIRST_ARRAY_SIZE = 5;
const int SECOND_ARRAY_SIZE = 8;
const int THIRD_ARRAY_SIZE = 13;

int* MakeRandomArray(int arraySize)
{
	int* newArray = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
	{
		newArray[i] = rand() % 100;
	}
	return newArray;
}

void PrintArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

void Task_1157()
{
	srand(time(nullptr));

	int* firstArray = MakeRandomArray(FIRST_ARRAY_SIZE);
	cout << "Random array of 5: " << endl;

	PrintArray(firstArray, FIRST_ARRAY_SIZE);

	int* secondArray = MakeRandomArray(SECOND_ARRAY_SIZE);
	cout << endl << "Random array of 8: " << endl;

	PrintArray(secondArray, SECOND_ARRAY_SIZE);

	int* thirdArray = MakeRandomArray(THIRD_ARRAY_SIZE);
	cout << endl << "Random array of 13: " << endl;

	PrintArray(thirdArray, THIRD_ARRAY_SIZE);

	delete[] firstArray;
	delete[] secondArray;
	delete[] thirdArray;
}