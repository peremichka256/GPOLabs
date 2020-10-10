#pragma once
#include "Person.h"

class Student : public Person
{
private:
	static int LastId;
	int _yearOfEntry;
	int _id;

	void SetId(int id);
	static int MakeNewId();
public:
	Student(string firstName, string lastName,
		string patronymic, int yearOfEntry);

	void SetYearOfEntry(int yearOfEntry);

	int GetYearOfEntry();
	int GetId();
};

