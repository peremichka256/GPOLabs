#include "SortException.h"

void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw exception("Error");
	}

	double swap;

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	//TODO: утечка памяти
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.9, 23.5};

	try
	{
		Sort(values, -1);
	}
	catch (exception)
	{
		PrintExceptionCatched();
	}
	delete[] values;
}