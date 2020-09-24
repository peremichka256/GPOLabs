#include "OutputFunctions.h"

void PrintMainMenu()
{
	cout << endl << "__________MENU__________" << endl
		<< "To demonstrate exception in Sort(), press 1. " << endl
		<< "To DemoRectangle(), press 2. " << endl
		<< "To demonstrate FindRectangle() and FindMaxRectangle(), press 3. " << endl
		<< "To DemoReadAndWriteRectangle(), press 4. " << endl
		<< "To DemoDynamicFlight(), press 5. " << endl
		<< "To DemoDynamicFlights(), press 6. " << endl
		<< "To DemoCircle(), press 7. " << endl
		<< "To demonstrate Make and Copy functions, press 8. " << endl
		<< "To DemoEnums(), press 9. " << endl
		<< "To DemoMovieWithGenre(), press 10. " << endl
		<< "_________________________" << endl;
}

void PrintExceptionCatched()
{
	cout << "Exception catched!"<<endl;
}
