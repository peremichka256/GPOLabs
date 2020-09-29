#include "Lab1_Tasks.h"
//TODO: аналогично предыдущим замечаниям
int CountLetters(char* array, int arraySize)
{
	int lettersCounter = 0;

	for (int i = 0; i < arraySize; i++)
	{
		if ((array[i] >= 'a') && (array[i] <= 'z'))
		{
			lettersCounter++;
			cout << array[i] << " ";
		}
	}
	cout << endl;
	return lettersCounter;
}

void Task_1156()
{ //TODO: аналогично предыдущим замечаниям
	int arraySize = 15;
	char* charArray = new char[arraySize]
	{ 'j','6','3','g','7','2','6','&','3','1','p','k','4','_' };
	cout << "Char array: ";

	for (int i = 0; i < arraySize; i++)
	{
		cout << charArray[i] << " ";
	}
	cout << endl << endl;
	cout << "Letters in array:" << endl;
	int countLetters = CountLetters(charArray, arraySize);
	cout << endl << "In our array " << countLetters << " letters";
	delete[] charArray;
}