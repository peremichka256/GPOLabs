#include "DemoEnumsFunctions.h"

//2.2.8.3
void DemoEnums()
{
	Color color = Blue;
	DayOfWeek dayOfWeek = Tuesday;
	Genre genre = Comedy;
	FormOfEducatin formOfeducation = Distant;
	ManufacturerOfSmartphones manufacturer = Sony;
	Season season = Summer;

	//2.2.8.4
	Color arrayOfColor[6];
	arrayOfColor[0] = Red;
	arrayOfColor[1] = Blue;
	arrayOfColor[2] = Purple;
	arrayOfColor[3] = Green;
	arrayOfColor[4] = Yellow;
	arrayOfColor[5] = Orange;

	DayOfWeek arrayOfDays[3];
	Genre arrayOfGenres[3];
	FormOfEducatin arrayOfForms[3];
	ManufacturerOfSmartphones arrayOfManufacturers[3];
	Season arrayOfSeasons[3];

	//2.2.8.5
	cout << "Entered red color:>> ";
	WriteColor(Red);

	//2.2.8.6
	ReadColor();

	//2.2.8.8
	Color* colors = new Color[8]{ Red,Red,Purple,Blue,Purple,Purple,DarkBlue,Yellow };
	Color searchingColor = Blue;
	int searchedColorCount = CountColor(colors, 8, searchingColor);
	cout << "Searching is "; 
	WriteColor(searchingColor);
	cout<< " in array: "
		<< searchedColorCount << "s serching colors in array." << endl;
	delete[] colors;
}

void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color." << endl;
			break;
		}
		case Orange:
		{
			cout << "Orange colore." << endl;
			break;
		}
		case Yellow:
		{
			cout << "Yellow colore." << endl;
			break;
		}
		case Green:
		{
			cout << "Green colore." << endl;
			break;
		}
		case Blue:
		{
			cout << "Blue color." << endl;
			break;
		}
		case DarkBlue:
		{
			cout << "Dark blue color." << endl;
			break;
		}
		case Purple:
		{
			cout << "Purple color." << endl;
			break;
		}
	}
}

Color ReadColor()
{
	cout << "Enter a number 0 to 6 (0 - red, 1 - orange,"
		<< "2 - yellow, 3 - green, 4 - blue, 5 - darkblue, 6 - purple):";
	int color;
	cin >> color;

	switch (color)
	{
		case 0:
		{
			return Red;
		}
		case 1:
		{
			return Orange;
		}
		case 2:
		{
			return Yellow;
		}
		case 3:
		{
			return Red;
		}
		case 4:
		{
			return Blue;
		}
		case 5:
		{
			return DarkBlue;
		}
		case 6:
		{
			return Purple;
		}
	}
}

int CountRed(Color* colors, int count)
{
	int redCount = 0;

	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			redCount++;
		}
	}
	return redCount;
}

int CountColor(Color * colors, int count, Color searchingColor)
{
	int colorCount = 0;

	for (int i = 0; i < count; i++)
	{
		if (colors[i] == searchingColor)
		{
			colorCount++;
		}
	}
	return colorCount;
}
//2.2.9.4
int CountMoviesByGenre(Movie** movies, int count, Genre findGenre)
{
	int genreCounter = 0;

	for (int i = 0; i < count; i++)
	{
		if (movies[i]->Genre == findGenre)
		{
			genreCounter++;
		}
	}
	return genreCounter;
}

void DemoMovieWithGenre()
{
	//2.2.9.2
	Movie movieWithGenre;
	movieWithGenre.Name = "Movie name";
	movieWithGenre.Genre = Horror;
	movieWithGenre.Length = 122;
	movieWithGenre.Rating = 2.3;
	movieWithGenre.YearOfRelease = 2020;

	//2.2.9.3
	//TODO: утечка памяти
	Movie* movie = MakeMovie("Cool Name", 69, 1999, Drama, 9.9);

	//2.2.9.4
	Movie** arrayOfMovies = new Movie * [10];
	arrayOfMovies[0] = MakeMovie("Film1", 114, 2000, Action, 8.1);
	arrayOfMovies[1] = MakeMovie("Film2", 95, 1971, Comedy, 8.5);
	arrayOfMovies[2] = MakeMovie("Film3", 127, 2014, Drama, 7.9);
	arrayOfMovies[3] = MakeMovie("Film4", 89, 2014, Drama, 8.1);
	arrayOfMovies[4] = MakeMovie("Film5", 120, 1990, Comedy, 8.2);
	arrayOfMovies[5] = MakeMovie("Film6", 134, 1994, Comedy, 8.0);
	arrayOfMovies[6] = MakeMovie("Drive", 97, 2011, Thriller, 7.2);
	arrayOfMovies[7] = MakeMovie("Film7", 168, 2010, Action, 7.1);
	arrayOfMovies[8] = MakeMovie("Film8", 93, 2012, Blockbuster, 3.5);
	arrayOfMovies[9] = MakeMovie("Film9", 228, 2003, Drama, 5.7);

	int countOfComedy =
		CountMoviesByGenre(arrayOfMovies, 10, Comedy);
	cout << endl << "In ur films array " << countOfComedy <<
		"s comedy" << endl;
	//2.2.9.5
	Movie* bestMovieInGenre = FindBestGenreMovie(arrayOfMovies, 10, Comedy);
	cout << endl << "Best film in genre: " << bestMovieInGenre->Name
		<< endl;
	delete[] arrayOfMovies;
}

//2.2.9.5
Movie* FindBestGenreMovie(Movie** movies, int count, Genre findGenre)
{
	Movie* bestMovieInGenre = nullptr;

	for (int i = 0; i < count; i++)
	{
		if (movies[i]->Genre == findGenre)
		{
			if (bestMovieInGenre)
			{
				if (movies[i]->Rating
	> bestMovieInGenre->Rating)
				{
					bestMovieInGenre = movies[i];
				}
			}
			else
			{
				bestMovieInGenre = movies[i];
			}
		}
	}
	return bestMovieInGenre;
}