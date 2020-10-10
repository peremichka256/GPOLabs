#include "Person.h"

Person::Person(string firstName, string lastName, string patronymic)
{
	SetFirstName(firstName);
	SetLastName(lastName);
	SetPatronymic(patronymic);
}

void Person::SetFirstName(string firstName)
{
	this->_firstName = firstName;
}

void Person::SetLastName(string lastName)
{
	this->_lastName = lastName;
}

void Person::SetPatronymic(string patronymic)
{
	this->_patronymic = patronymic;
}

string Person::GetFirstName()
{
	return this->_firstName;
}

string Person::GetLastName()
{
	return this->_lastName;
}

string Person::GetPatronymic()
{
	return this->_patronymic;
}

void ShowName(Person* person)
{
	cout << person->GetLastName() << " "
		<< person->GetFirstName() << " "
		<< person->GetPatronymic() << endl;
}