#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string _firstName;
	string _lastName;
	string _patronymic;

public:
	Person(string firstName, string lastName, string patronymic);

	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetPatronymic(string patronymic);

	string GetFirstName();
	string GetLastName();
	string GetPatronymic();
};

void ShowName(Person* person);