#include "Time.h"

Time* MakeTime(int hour, int minute, int second)
{
	Time* time = new Time;
	time->Hour = hour;
	time->Minute = minute;
	time->Second = second;
	return time;
}

Time* CopyTime(Time& time)
{
	Time* copiedTime = MakeTime(
		time.Hour,
		time.Minute,
		time.Second
	);
	return copiedTime;
}