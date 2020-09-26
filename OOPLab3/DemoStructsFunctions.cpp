#include "DemoStructsFunctions.h"

void DemoBook()
{
	Book* books = new Book[BOOK_ARRAY_SIZE];

	for (int i = 0; i < BOOK_ARRAY_SIZE; i++)
	{
		cout << "\nEnter book #" << i << ":\n";
		ReadBookFromConsole(books[i]);
	}

	for (int i = 0; i < BOOK_ARRAY_SIZE; i++)
	{
		cout << "\nBook #" << i << ":\n";
		WriteBookToConsole(books[i]);
	}

	cout << "Enter the author whose book you want to find.";
	string searchAuthor;
	getline(cin, searchAuthor);
	int foundBookIndex = FindBookByAuthor(books, BOOK_ARRAY_SIZE, searchAuthor);

	if (foundBookIndex > -1)
	{
		cout << "\nAutor's book: ";
		WriteBookToConsole(books[foundBookIndex]);
	}
	else
	{
		cout << "\nNo book with this author";
	}

	for (int i = 0; i < BOOK_ARRAY_SIZE; i++)
	{
		delete[] books[i].Autors;
	}

	delete[] books;
}

void DemoRoute()
{
	Route* routes = new Route[ROUTES_ARRAY_SIZE];

	for (int i = 0; i < ROUTES_ARRAY_SIZE; i++)
	{
		cout << "\nEnter route #" << i << ":\n";
		ReadRouteFromConsole(routes[i]);
	}

	for (int i = 0; i < ROUTES_ARRAY_SIZE; i++)
	{
		cout << "\nRoute #" << i << ":\n";
		WriteRouteToConsole(routes[i]);
	}

	cout << "Enter a stop on the route you want to find.";
	string searchRoute;
	getline(cin, searchRoute);
	int foundRouteIndex = FindRouteByStop(routes, ROUTES_ARRAY_SIZE, searchRoute);

	if (foundRouteIndex > -1)
	{
		cout << "\nFind route: ";
		WriteRouteToConsole(routes[foundRouteIndex]);
	}
	else
	{
		cout << "\nNo route with such a stop. ";
	}

	for (int i = 0; i < ROUTES_ARRAY_SIZE; i++)
	{
		delete[] routes[i].Stops;
	}
	delete[] routes;
}