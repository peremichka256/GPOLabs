#pragma once
#include <string>

using namespace std;

class Post
{
	string _title;
	string _text;

public:
	Post(string title, string text);

	void SetTitle(string title);
	void SetText(string text);

	string GetTitle();
	string GetText();

};

