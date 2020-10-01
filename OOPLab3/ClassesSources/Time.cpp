#include "../ClassesHeaders/Time.h"

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
		throw exception("SetYear() error");
	}
	this->_year = year;
}

void Time::SetMonth(int month)
{
	if ((month > 12) && (month < 0))
	{
		throw exception("SetMonth() error");
	}
	this->_month = month;
}

void Time::SetDay(int day)
{
	if ((day > 30) && (day < 0))
	{
		throw exception("SetDay() error");
	}
	this->_day = day;
}

void Time::SetHour(int hour)
{
	if ((hour > 24) && (hour < 0))
	{
		throw exception("SetHour() error");
	}
	this->_hour = hour;
}

void Time::SetMinute(int minute)
{
	if ((minute > 60) && (minute < 0))
	{
		throw exception("SetMinute() error");
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
