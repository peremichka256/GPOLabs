#pragma once
#include "Book.h"
#include "Route.h"
using namespace std;

void PrintMainMenu();

void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);

void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);