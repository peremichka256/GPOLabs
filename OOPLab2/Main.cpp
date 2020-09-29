#include "OutputFunctions.h"
#include "SortException.h"
#include "DemoFunctions.h"
#include "DemoDynamicFunctions.h"
#include "DemoEnumsFunctions.h"

int main()
{
	bool isExitFromWhile = true;

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
				DemoSort();
				break;
			}
			case 2:
			{
				DemoRectangle();
				break;
			}
			case 3:
			{
				Rectangle arrayOfRectangles[3];
				arrayOfRectangles[0].Color = "Red";
				arrayOfRectangles[0].Length = 12.76;
				arrayOfRectangles[0].Width = 76.6;

				arrayOfRectangles[1].Color = "Green";
				arrayOfRectangles[1].Length = 34.2;
				arrayOfRectangles[1].Width = 23;

				arrayOfRectangles[2].Color = "Blue";
				arrayOfRectangles[2].Length = 21.4;
				arrayOfRectangles[2].Width = 31;

				FindRectangle(arrayOfRectangles,3);
				cout << endl;
				FindMaxRectangle(arrayOfRectangles,3);
				break;
			}
			case 4:
			{
				DemoReadAndWriteRectangle();
				break; 
			}
			case 5:
			{
				DemoDynamicFlight();
				break;
			}
			case 6:
			{
				DemoDynamicFlights();
				break;
			}
			case 7:
			{
				DemoCircle();
				break;
			}
			case 8:
			{
				//TODO: утечка памяти
				Rectangle* rectangle = MakeRectangle(12, 6.4, "Purple");
				WriteRectangle(*rectangle);
				Rectangle* copiedRectangle = CopyRectangle(*rectangle);
				WriteRectangle(*copiedRectangle);
				delete rectangle;
				delete copiedRectangle;
				break;
			}
			case 9:
			{
				DemoEnums();
				break;
			}
			case 10:
			{
				DemoMovieWithGenre();
				break;
			}
		}
	}
}