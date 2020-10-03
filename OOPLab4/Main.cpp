#include "OutputFunctions.h"
#include "GeometricProgram.h"

int Ring::AllRingsCount = 0;

int main()
{
	bool isExitFromWhile = true;
	GeometricProgram geometricProgram;

	while (isExitFromWhile)
	{
		PrintMainMenu();
		unsigned int button;
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
			geometricProgram.DemoRing();
			break;
		}
		case 2:
		{
			geometricProgram.DemoCollision();
			break;
		}
		}
	}
	
}