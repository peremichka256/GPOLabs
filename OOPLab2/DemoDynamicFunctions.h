#pragma once
#include "./Structs/Rectangle.h"
#include "./Structs/Flight.h"
#include "./Structs/Movie.h"
#include "./Structs/Time.h"
#include "./Structs/Circle.h"
#include <iostream>

using namespace std;

void DemoDynamicFlight();
void DemoDynamicFlights();
void FindShortestFlight(Flight* flights, int count);

void DemoCircle();
Circle* MakeCircle(double x, double y, double radius, string color);
Circle* CopyCircle(Circle& circle);

Rectangle* MakeRectangle(double length, double width, string color);
Rectangle* CopyRectangle(Rectangle& rectangle);

Flight* MakeFlight(string pointOfDeparture, string pointOfDestination, 
	int flightTime);
Flight* CopyFlight(Flight& flight);

Movie* MakeMovie(string name, int Length, int yearOfRelease, 
	Genre genre, double rating);
Movie* CopyMovie(Movie& movie);

Time* MakeTime(int hour, int minute, int second);
Time* CopyTime(Time& time);
