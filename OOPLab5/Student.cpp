#include "Student.h"

void Student::SetId(int id)
{
	_id = id;
}

int Student::MakeNewId()
{
	LastId++;
	return LastId;
}

Student::Student(string firstName, string lastName, string patronymic, 
	int yearOfEntry) : Person(firstName, lastName, patronymic)
{
	SetYearOfEntry(yearOfEntry);
	SetId(MakeNewId());
}

void Student::SetYearOfEntry(int yearOfEntry)
{
	if (yearOfEntry < 0)
	{
		throw exception("year of the entry shold be positive");

	}
	_yearOfEntry = yearOfEntry;
}

int Student::GetYearOfEntry()
{
	return _yearOfEntry;
}

int Student::GetId()
{
	return _id;
}
