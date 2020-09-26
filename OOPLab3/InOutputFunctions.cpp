#include "InOutputFunctions.h"

void PrintMainMenu()
{
	cout << "To DemoBook(), press 1\n"
		<< "To DemoRoute(), press 2\n"
		<< "To DemoRectang1e(), press 3\n"
		<< "To DemoFlight(), press 4\n"
		<< "To DemoBand(), press 5\n";
}

void ReadBookFromConsole(Book& book)
{
	string title;
	cout << "Enter book title:\n";
	cin.ignore(1);
	getline(cin, title);
	SetTitle(book, title);

	bool isSetPublicationYear = false;

	while (isSetPublicationYear == false)
	{
		try
		{
			cout << "Enter year of publication:\n";
			int publicationYear;
			cin >> publicationYear;
			SetPublicationYear(book, publicationYear);
			isSetPublicationYear = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered the year of publication the book,"
				<< " the year of publication should be positive, but no more "
				<< "but not more than the current year. Repeat the entry. ";
			isSetPublicationYear = false;
		}
	}

	bool isSetPages = false;

	while (isSetPages == false)
	{
		try
		{
			cout << "Enter number of pages:\n";
			int pageCount;
			cin >> pageCount;
			SetPages(book, pageCount);
			isSetPages = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered number of pages, number"
				<< " of pages should be positive. "
				<< "Repeat the entry.\n";
			isSetPages = false;
		}
	}

	bool isSetAutorCounter = false;

	while (isSetAutorCounter == false)
	{
		try
		{
			int autorsCount;
			cout << "Enter number of autors:\n";
			cin >> autorsCount;
			SetAutorCount(book, autorsCount);
			isSetAutorCounter = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered number of autors, number"
				<< " of autors should b not less than 1 and not more than 10. "
				<< "Повторите ввод\n";
			isSetAutorCounter = false;
		}
	}

	string* autors = new string[book.AutorCount];

	cin.ignore(1);

	for (int i = 0; i < book.AutorCount; i++)
	{
		cout << "Enter autor #" << i << "\n";
		getline(cin, autors[i]);
	}
	SetAutors(book, autors);

	Book* newBook = &book;
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < (book.AutorCount - 1); i++)
	{
		cout << book.Autors[i] << ", ";
	}
	cout << book.Autors[book.AutorCount - 1] << ". ";

	cout << book.Title << ". "
		<< book.PublicationYear << ". - "
		<< book.PageCount << "с.\n";

}

void ReadRouteFromConsole(Route& route)
{
	bool isSetRouteNumber = false;

	while (isSetRouteNumber == false)
	{
		try
		{
			cout << "Enter route number:\n";
			int number;
			cin >> number;
			SetRouteNumber(route, number);
			isSetRouteNumber = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered route number, number"
				<< " of route should be positive. "
				<< "Repeat the entry.\n";
			isSetRouteNumber = false;
		}
	}

	bool isSetAverageDuration = false;

	while (isSetAverageDuration == false)
	{
		try
		{
			cout << "Enter average duration of route:\n";
			int averageDuration;
			cin >> averageDuration;
			SetAverageDuration(route, averageDuration);
			isSetAverageDuration = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered average duration, average"
				<< " duration of route should be not less than 60"
				<< " and no more than 480 minutes. "
				<< "Repeat the entry.\n";
			isSetAverageDuration = false;
		}
	}

	bool isSetTrafficInterval = false;

	while (isSetTrafficInterval == false)
	{
		try
		{
			cout << "Enter traffic interval:\n";
			int trafficInterval;
			cin >> trafficInterval;
			SetTrafficInterval(route, trafficInterval);
			isSetTrafficInterval = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered traffic interval, traffic"
				<< " interval should be not less than 1"
				<< " and no more than 60 minutes. "
				<< "Repeat the entry.\n";
			isSetTrafficInterval = false;
		}
	}

	bool isSetStopCounter = false;

	while (isSetStopCounter == false)
	{
		try
		{
			cout << "Enter number of stops:\n";
			int stopCounter;
			cin >> stopCounter;
			SetStopCounter(route, stopCounter);
			isSetStopCounter = true;
		}
		catch (exception)
		{
			cout << "You incorrectly entered number of stops, number"
				<< " of stops should be not less than 1"
				<< " and no more than 50. "
				<< "Repeat the entry.\n";
			isSetStopCounter = false;
		}
	}

	string* stops = new string[route.StopCounter];
	cin.ignore(1);

	for (int i = 0; i < route.StopCounter; i++)
	{
		cout << "Enter #" << i << " stop name.\n";
		getline(cin, stops[i]);
	}
	SetStops(route, stops);
}

void WriteRouteToConsole(Route& route)
{
	cout << "Route #" << route.RouteNumber
		<< " average duration " << route.AverageDuration << " minutes. "
		<< "Fraffic interval of route is " << route.TrafficInterval << " minutes. "
		<< "Stops:\n";

	for (int i = 0; i < route.StopCounter; i++)
	{
		cout << i << ". " << route.Stops[i] << endl;
	}
}