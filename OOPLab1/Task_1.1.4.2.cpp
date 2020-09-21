#include "Lab1_Tasks.h"

void Task_1142()
{
	int a[10] = {1,4,2,-8,3,7,3,0,-6,-3};
	cout << "Size of int type: " << sizeof(int) << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Address of a[" << i << "]: " << &a[i] << endl;
	}

	cout << endl;
	cout << "Size of double type: " << sizeof(double) << endl;
	double b[10] = { 1.5,4.9,2.0,-8.9,3.3,7.3,3.3,0.1,-6.7,-3.4 };
	for (int i = 0; i < 10; i++)
	{
		cout << "Address of b[" << i << "]: " << &b[i] << endl;
	}
}