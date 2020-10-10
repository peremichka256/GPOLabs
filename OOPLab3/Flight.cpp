#include "Flight.h"

Flight::Flight()
{
}

Flight::Flight(string number, string departurePoint, string destinationPoint,
	Time* departureTime, Time* arrivalTime)
{
	SetNumber(number);
	SetDeparturePoint(departurePoint);
	SetDestinationPoint(destinationPoint);
	SetDepartureTime(departureTime);
	SetArrivalTime(arrivalTime);
}

void Flight::SetNumber(string number)
{
	this->_number = number;
}

void Flight::SetDeparturePoint(string departurePoint)
{
	this->_departurePoint = departurePoint;
}

void Flight::SetDestinationPoint(string destinationPoint)
{
	this->_destinationPoint = destinationPoint;
}

void Flight::SetDepartureTime(Time* departureTime)
{
	this->_departureTime = departureTime;
}

void Flight::SetArrivalTime(Time* arrivalTime)
{
	if ((arrivalTime->GetYear() < this->_departureTime->GetYear())
		|| ((arrivalTime->GetYear() == this->_departureTime->GetYear())
			&&(arrivalTime->GetMonth() < this->_departureTime->GetMonth()))
		|| ((arrivalTime->GetMonth() == this->_departureTime->GetMonth())
			&&(arrivalTime->GetDay() < this->_departureTime->GetDay()))
		|| ((arrivalTime->GetDay() == this->_departureTime->GetDay())
			&& (arrivalTime->GetHour() < this->_departureTime->GetHour()))
		|| ((arrivalTime->GetHour() == this->_departureTime->GetHour())
			&& (arrivalTime->GetMinute() < this->_departureTime->GetMinute())))
	{
		throw exception("arrivalTime should be at least departureTime");
	}
	this->_arrivalTime = arrivalTime;
}

int Flight::GetFlightTimeMinutes()
{
	if ((this->GetArrivalTime()->GetYear() > this->GetDepartureTime()->GetYear())
		|| (this->GetArrivalTime()->GetMonth() > this->GetDepartureTime()->GetMonth())
		||(this->GetArrivalTime()->GetDay() > this->GetDepartureTime()->GetDay()))
	{
		int hoursWithoutMinutes = this->GetArrivalTime()->GetHour()
			- this->GetDepartureTime()->GetHour();

		if (this->GetArrivalTime()->GetMinute()
			< this->GetDepartureTime()->GetMinute())
		{
			hoursWithoutMinutes += 24;
			hoursWithoutMinutes--;
		}
		else
		{
			hoursWithoutMinutes += 24;
		}

		int minutesWithoutHours = this->GetArrivalTime()->GetMinute()
			- this->GetDepartureTime()->GetMinute();

		if (minutesWithoutHours < 0)
		{
			minutesWithoutHours += 60;
		}

		int flightTimeMinutes = hoursWithoutMinutes * 60 + minutesWithoutHours;
		return flightTimeMinutes;
	}
	else if (this->GetArrivalTime()->GetDay() == this->GetDepartureTime()->GetDay())
	{
		int hoursWithoutMinutes = this->GetArrivalTime()->GetHour()
			- this->GetDepartureTime()->GetHour();

		if (this->GetArrivalTime()->GetMinute() < this->GetDepartureTime()->GetMinute())
		{
			hoursWithoutMinutes--;
		}

		int minutesWithoutHours = this->GetArrivalTime()->GetMinute()
			- this->GetDepartureTime()->GetMinute();

		if (minutesWithoutHours < 0)
		{
			minutesWithoutHours += 60;
		}

		int flightTimeMinutes = hoursWithoutMinutes * 60 + minutesWithoutHours;
		return flightTimeMinutes;
	}
}

string Flight::GetNumber()
{
	return this->_number;
}

string Flight::GetDeparturePoint()
{
	return this->_departurePoint;
}

string Flight::GetDestinationPoint()
{
	return this->_destinationPoint;
}

Time* Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time* Flight::GetArrivalTime()
{
	return this->_arrivalTime;
}
