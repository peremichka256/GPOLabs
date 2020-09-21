#include "Lab1_Tasks.h"

void FooTask_1144(double a)
{
	cout << "Address of a in Foo(): " << &a << endl;
	cout << "Value of a in Foo(): " << a << endl;

	a = 15.0;
	cout << "New value of in Foo():" << a << endl;
}

void Task_1144()
{
	double a = 5.0;
	cout << "Address of a in main(): " << &a << endl;
	cout << "Value of a in main(): " << a << endl;
	cout << endl;

	FooTask_1144(a);

	cout << endl;
	cout << "Vlaue of a in main(): " << a << endl;
}