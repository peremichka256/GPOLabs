#include "Time.h"

Time::Time(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

void Time::SetYear(int year)
{
	if (year < 0)
	{
		throw exception("year should be positive");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if ((month > 12) && (month < 0))
	{
		throw exception
		("a year can only be 12 month and month has a positive value");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if ((day > 30) && (day < 0))
	{
		throw exception
		("a month can only be 30 days and day has a positive value");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if ((hour > 24) && (hour < 0))
	{
		throw exception
		("a day can only be a 12 hours and hour has a positive value");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if ((minute > 60) && (minute < 0))
	{
		throw exception
		("a hour can only be a 60 minutes and minute has a positive value");
	}
	this->_minute = minute;
}

int Time::GetYear()
{
	return this->_year;
}

int Time::GetMonth()
{
	return this->_month;
}

int Time::GetDay()
{
	return this->_day;
}

int Time::GetHour()
{
	return this->_hour;
}

int Time::GetMinute()
{
	return this->_minute;
}
