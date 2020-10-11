#include "Person.h"

Person::Person(string firstName, string lastName, string patronymic)
{
	SetFirstName(firstName);
	SetLastName(lastName);
	SetPatronymic(patronymic);
}

void Person::SetFirstName(string firstName)
{
	_firstName = firstName;
}

void Person::SetLastName(string lastName)
{
	_lastName = lastName;
}

void Person::SetPatronymic(string patronymic)
{
	_patronymic = patronymic;
}

string Person::GetFirstName()
{
	return _firstName;
}

string Person::GetLastName()
{
	return _lastName;
}

string Person::GetPatronymic()
{
	return _patronymic;
}

void ShowName(Person* person)
{
	cout << person->GetLastName() << " "
		<< person->GetFirstName() << " "
		<< person->GetPatronymic() << endl;
}