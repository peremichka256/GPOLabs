#include "DemoDynamicFunctions.h"

//2.2.6.1
void DemoDynamicFlight()
{
	Flight* flight = new Flight;
	flight->FlightTime = 240;
	flight->PointOfDeparture = "Krasnoyarsk";
	flight->PointOfDestination = "Moscow";

	cout << "Flight: "
		<< flight->PointOfDeparture << " - "
		<< flight->PointOfDestination << ", transit times "
		<< flight->FlightTime << " minutes" << endl;

	delete flight;
}

//2.2.6.2
void DemoDynamicFlights()
{
	Flight* dynamicArrayOfFlights = new Flight[4];

	dynamicArrayOfFlights[0].FlightTime = 240;
	dynamicArrayOfFlights[0].PointOfDeparture = "Krasnoyarsk";
	dynamicArrayOfFlights[0].PointOfDestination = "Moscow";

	dynamicArrayOfFlights[1].FlightTime = 322;
	dynamicArrayOfFlights[1].PointOfDeparture = "Okland";
	dynamicArrayOfFlights[1].PointOfDestination = "Singapur";

	dynamicArrayOfFlights[2].FlightTime = 69;
	dynamicArrayOfFlights[2].PointOfDeparture = "Washington";
	dynamicArrayOfFlights[2].PointOfDestination = "New York";

	dynamicArrayOfFlights[3].FlightTime = 210;
	dynamicArrayOfFlights[3].PointOfDeparture = "Berlin";
	dynamicArrayOfFlights[3].PointOfDestination = "Sain-Petersburg";

	for (int i = 0; i < 4; i++)
	{
		cout << "Flight["<<i<<"]: "
			<< dynamicArrayOfFlights[i].PointOfDeparture << " - "
			<< dynamicArrayOfFlights[i].PointOfDestination << ", transit times "
			<< dynamicArrayOfFlights[i].FlightTime << " minutes" << endl;
	}
	FindShortestFlight(dynamicArrayOfFlights, 4);

	delete[] dynamicArrayOfFlights;
}

//2.2.6.3
void FindShortestFlight(Flight* flights, int count)
{
	Flight shortestFlight = flights[0];

	for (int i = 0; i < count; i++)
	{
		if (flights[i].FlightTime < shortestFlight.FlightTime)
		{
			shortestFlight = flights[i];
		}
	}

	cout << endl << "Shortest flight is "
		<< shortestFlight.PointOfDeparture << " - "
		<< shortestFlight.PointOfDestination << ", transit times "
		<< shortestFlight.FlightTime << " minutes" << endl;
}

//2.2.7.1
void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);

	if ((copiedCircle1->X == circle1->X)
		&& (copiedCircle1->Y == circle1->Y)
		&& (copiedCircle1->Radius == circle1->Radius))
	{
		cout << "Functions MakeCircle() and CopyCircle() work";
	}
}