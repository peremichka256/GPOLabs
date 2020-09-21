#include "Lab1_Tasks.h"

void FooTask_1148(double* a)
{
	cout << "Address in pointer: " << a << endl;
	cout << "Value of pointer: " << &a << endl;
	cout << "Value in pointer address: " << *a << endl;

	*a = 15.0;
	cout << "New value in pointer address: " << *a << endl;
}

void Task_1148()
{
	double a = 5.0;
	double* pointer = &a;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Address in pointer in main(): " << pointer << endl;
	cout << "Address of pointer in main(): " << &pointer << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	FooTask_1148(pointer);

	cout << endl;
	cout << "Vlaue of a in main(): " << a << endl;
}