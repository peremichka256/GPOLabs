#pragma once
#include <string>

using namespace std;

struct Time
{
	int Hour;
	int Minute;
	int Second;
};

Time* MakeTime(int hour, int minute, int second);
Time* CopyTime(Time& time);