#pragma once
#include <string>
#include "Time.h"

class Flight
{
private:
	string _number;
	string _departurePoint;
	string _destinationPoint;
	Time* _departureTime;
	Time* _arrivalTime;

public:
	Flight();
	Flight(string number, string departurePoint, string destinationPoint,
		Time* departureTime, Time* arrivalTime);

	void SetNumber(string number);
	void SetDeparturePoint(string departurePoint);
	void SetDestinationPoint(string destinationPoint);
	void SetDepartureTime(Time* departureTime);
	void SetArrivalTime(Time* arrivalTime);

	int GetFlightTimeMinutes();
	string GetNumber();
	string GetDeparturePoint();
	string GetDestinationPoint();
	Time* GetDepartureTime();
	Time* GetArrivalTime();
};

