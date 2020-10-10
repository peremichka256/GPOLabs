#include "DemoInheritance.h"

int Student::LastId = 1000;

int main()
{
	bool isExitFromWhile = true;
	int button;
	DemoInheritance demoInheritance;

	while(isExitFromWhile)
	{
		PrintMainMenu();
		cin >> button;
		system("cls");

		switch (button)
		{
			case 0:
			{
				cout << "Work is completed!";
				return 0;
			}
			case 1:
			{
				demoInheritance.Persons();
				break;
			}
			case 2:
			{
				demoInheritance.Users();
				break;
			}
			case 3:
			{
				demoInheritance.Discount();
				break;
			}
		}
	}
}