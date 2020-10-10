#pragma once
#include "Person.h"

class Teacher : public Person
{
private:
	string _post;

public:
	Teacher(string firstName, string lastName,
		string patronymic, string post);

	void SetPresentPost(string post);

	string GetPresentPost();
};

