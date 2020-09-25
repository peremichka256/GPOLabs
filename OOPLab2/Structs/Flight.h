#pragma once
#include <string>

using namespace std;

struct Flight
{
	string PointOfDeparture;
	string PointOfDestination;
	int FlightTime;
};

Flight* MakeFlight(string pointOfDeparture, string pointOfDestination,
	int flightTime);
Flight* CopyFlight(Flight& flight);

void FindShortestFlight(Flight* flights, int count);