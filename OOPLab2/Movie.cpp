#include "Structs/Movie.h"

Movie* MakeMovie(string name, int length, int yearOfRelease, Genre genre, double rating)
{
	Movie* movie = new Movie;
	movie->Name = name;
	movie->Length = length;
	movie->YearOfRelease = yearOfRelease;
	movie->Genre = genre;
	movie->Rating = rating;
	return movie;
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = MakeMovie(
		movie.Name,
		movie.Length,
		movie.YearOfRelease,
		movie.Genre,
		movie.Rating
	);
	return copiedMovie;
}