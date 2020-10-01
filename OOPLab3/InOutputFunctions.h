#pragma once
#include "./StructsHeaders/Book.h"
#include "./StructsHeaders/Route.h"
#include "./ClassesHeaders/Band.h"

void PrintMainMenu();

void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);

void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);

void PrintSong(Song& song);