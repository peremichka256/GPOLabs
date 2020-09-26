#include <iostream>
#include "DemoStructsFunctions.h"
#include "DemoClassFunctions.h"

using namespace std;

int main()
{
	bool isExitFromWhile = true;

	while (isExitFromWhile)
	{
		PrintMainMenu();
		unsigned int button;
		cin >> button;

		switch (button)
		{
			case 0:
			{
				cout << "Work is completed!";
				return 0;
			}
			case 1:
			{
				DemoBook();
				break;
			}
			case 2:
			{
				DemoRoute();
				break;
			}
		}
	}
}