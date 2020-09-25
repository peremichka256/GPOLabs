#include "Structs/Flight.h"

Flight* MakeFlight(string pointOfDeparture, string pointOfDestination, int flightTime)
{
	Flight* flight = new Flight;
	flight->PointOfDeparture = pointOfDeparture;
	flight->PointOfDestination = pointOfDestination;
	flight->PointOfDestination = pointOfDestination;
	return flight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = MakeFlight(
		flight.PointOfDeparture,
		flight.PointOfDestination,
		flight.FlightTime
	);
	return copiedFlight;
}