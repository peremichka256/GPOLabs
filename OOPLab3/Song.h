#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "Genre.h"
using namespace std;

class Song
{
private:
	string _title;
	int _duration;
	Genre _genre;

public:
	Song();
	Song(string title, int duration, Genre genre);

	void SetTitle(string title);
	void SetDuration(int duration);
	void SetGenre(Genre genre);

	string GetTitle();
	int GetDuration();
	Genre GetGenre();
};

