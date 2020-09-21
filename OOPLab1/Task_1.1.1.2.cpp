#include "Lab1_Tasks.h"

void Task_1112()
{
	double add = 1.0;
	double sum = 0.0;

	for (int i = 0; i < 1000; i++)
	{
		sum += add * i;//точка останова тут

		if (i % 3 == 0)
		{
			add *= 1.1;
		}
		else
		{
			add /= 3.0;
		}
	}
	cout << "Total sum is " << sum << endl;
}
//i=777 	sum	3.2624579394327844	double