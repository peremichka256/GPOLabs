#include "Lab1_Tasks.h"

void Task_1152()
{
	//TODO: размер массива вынести в переменную, в объявлении массива и в циклах использовать переменную
	bool* boolArray = new bool[7]{ true,false,true,true,false,true,false };

	cout << "Array of bool: " << endl;

	for (int i = 0; i < 7; i++)
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
	boolArray = nullptr; //TODO: после освобождения памяти указатель и так должен быть равен nullptr. Проверь через отладку
}