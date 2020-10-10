#pragma once
#include <string>
#include "Genre.h"

using namespace std;

struct Movie
{
	string Name;
	int Length;
	int YearOfRelease;
	Genre Genre;
	double Rating;
};

Movie* MakeMovie(string name, int Length, int yearOfRelease,
	Genre genre, double rating);
Movie* CopyMovie(Movie& movie);