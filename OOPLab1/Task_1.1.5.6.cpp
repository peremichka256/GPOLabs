#include "Lab1_Tasks.h"
//TODO: аналогично предыдущим замечаниям
int CountLetters(char* array)
{
	int lettersCounter = 0;

	for (int i = 0; i < 15; i++)
	{
		if ((array[i] >= 97) && (array[i] <= 122))
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
	char* charArray = new char[15]
	{ 'j','6','3','g','7','2','6','&','3','1','p','k','4','_' };
	cout << "Char array: ";

	for (int i = 0; i < 15; i++)
	{
		cout << charArray[i] << " ";
	}
	cout << endl << endl;
	cout << "Letters in array:" << endl;
	int countLetters = CountLetters(charArray);
	cout << endl << "In our array " << countLetters << " letters";
	delete[] charArray;
	charArray = nullptr;
}