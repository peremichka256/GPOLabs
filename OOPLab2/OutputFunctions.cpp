#include "OutputFunctions.h"

void PrintMainMenu()
{
	//TODO: правильнее в начале написать цифру, а потом что это за пункт меню. Иначе цифры в тексте скачут гребенкой, неудобно находить нужный пункт
	cout << endl << "____________________MENU____________________" << endl
		<< "1. To demonstrate exception in Sort()" << endl
		<< "2. To DemoRectangle(), press 2. " << endl
		<< "3. To demonstrate FindRectangle() and FindMaxRectangle()" << endl
		<< "4. To DemoReadAndWriteRectangle()" << endl
		<< "5. To DemoDynamicFlight()" << endl
		<< "6. To DemoDynamicFlights()" << endl
		<< "7. To DemoCircle()" << endl
		<< "8. To demonstrate Make and Copy functions" << endl
		<< "9. To DemoEnums()" << endl
		<< "10. To DemoMovieWithGenre()" << endl
		<< "____________________________________________________" << endl;
}

void PrintExceptionCatched()
{
	cout << "Exception catched!"<<endl;
}