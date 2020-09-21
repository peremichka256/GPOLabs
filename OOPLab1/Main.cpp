#include "Lab1_Tasks.h"
#include "OutputFunctions.h"

int main()
{
	unsigned int button;
	bool isExitFromWhile = true;

	while (isExitFromWhile)
	{
		PrintMainMenu();
		cin >> button;
		system("cls");

		switch (button)
		{
			case 0:
			{
				cout << "Work is completed.";
				return 0;
			}
			case 1:
			{
				Task_1111();
				break;
			}
			case 2:
			{
				Task_1112();
				break;
			}
			case 3:
			{
				Task_1121();
				break;
			}
			case 4:
			{
				Task_1122();
				break;
			}
			case 5:
			{
				Task_1123();
				break;
			}
			case 6:
			{
				Task_1131();
				break;
			}
			case 7:
			{
				Task_1132();
				break;
			}
			case 8:
			{
				Task_1133();
				break;
			case 9:
			{
				Task_1134();
				break;
			}
			case 10:
			{
				Task_1134();
				break;
			}
		}
	}
}