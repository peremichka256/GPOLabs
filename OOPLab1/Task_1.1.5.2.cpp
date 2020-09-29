#include "Lab1_Tasks.h"

void Task_1152()
{
	//TODO: размер массива вынести в переменную, в объявлении массива и в циклах использовать переменную
	int arraySize = 7;
	bool* boolArray = new bool[arraySize]{ true,false,true,true,false,true,false };

	cout << "Array of bool: " << endl;

	for (int i = 0; i < arraySize; i++)
	{
		if (boolArray[i] == true)
		{
			cout << "true ";
		}
		else
		{
			cout << "false ";
		}
	}

	delete[] boolArray;
	//TODO: после освобождения памяти указатель и так должен быть равен nullptr. Проверь через отладку
}