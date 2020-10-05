#pragma once
#include "Book.h"
#include "Route.h"
#include "./Classes/Band.h"

void PrintMainMenu();

void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);

void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);

void PrintSong(Song& song);