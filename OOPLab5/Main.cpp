#include "Student.h"
#include "Teacher.h"
#include "OutputFunctions.h"

int Student::LastId = 1000;

int main()
{
	bool isExitFromWhile = true;
	int button;

	while(isExitFromWhile)
	{
		PrintMainMenu();
		cin >> button;

		switch (button)
		{
			case 0:
			{
				cout << "Work is completed!";
				return 0;
			}
			case 1:
			{
				Person* person = new Person("Ivan", "Ivanov", "Ivanovich");
				Student* student = new Student("Petr", "Petrov", "Petrovich", 2018);
				Teacher* teacher
					= new Teacher("Ivan", "Petrov", "Vladimirovich", "Senior lecturer");

				ShowName(person);
				ShowName(student);
				ShowName(teacher);

				delete person;
				delete student;
				delete teacher;
				break;
			}
		}
	}
}