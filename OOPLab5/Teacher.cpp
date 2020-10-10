#include "Teacher.h"

Teacher::Teacher(string firstName, string lastName, 
	string patronymic, string post) : Person(firstName, lastName, patronymic)
{
	SetPresentPost(post);
}

void Teacher::SetPresentPost(string post)
{
	_post = post;
}

string Teacher::GetPresentPost()
{
	return _post;
}
