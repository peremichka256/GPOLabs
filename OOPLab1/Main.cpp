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
				Task_1141();
				break;
			}
			case 11:
			{
				Task_1142();
				break;
			}
			case 12:
			{
				Task_1143();
				break;
			}
			case 13:
			{
				Task_1144();
				break;
			}
			case 14:
			{
				Task_1145();
				break;
			}
			case 15:
			{
				Task_1146();
				break;
			case 16:
			{
				Task_1148();
				break;
			}
			case 17:
			{
				Task_1151();
				break;
			}
			case 18:
			{
				Task_1152();
				break;
			}
			case 19:
			{
				Task_1153();
				break;
			}
			case 20:
			{
				Task_1154();
				break;
			}
			case 21:
			{
				Task_1155();
				break;
			}
			case 22:
			{
				Task_1156();
				break;
			}
			case 23:
			{
				Task_1157();
				break;
			}
			case 24:
			{
				Task_1158();
				break;
			}
			}}
		}
	}
}