#include "DemoEnumsFunctions.h"

//2.2.8.3
void DemoEnums()
{
	Color color = BLUE;
	DayOfWeek dayOfWeek = TUESDAY;
	Genre genre = COMEDY;
	FormOfEducatin formOfeducation = DISTANT;
	ManufacturerOfSmartphones manufacturer = SONY;
	Season season = SUMMER;

	//2.2.8.4
	Color arrayOfColor[6];
	arrayOfColor[0] = RED;
	arrayOfColor[1] = BLUE;
	arrayOfColor[2] = PURPLE;
	arrayOfColor[3] = GREEN;
	arrayOfColor[4] = YELLOW;
	arrayOfColor[5] = ORANGE;

	DayOfWeek arrayOfDays[3];
	Genre arrayOfGenres[3];
	FormOfEducatin arrayOfForms[3];
	ManufacturerOfSmartphones arrayOfManufacturers[3];
	Season arrayOfSeasons[3];

	//2.2.8.5
	cout << "Entered red color:>> ";
	WriteColor(RED);

	//2.2.8.6
	ReadColor();

	//2.2.8.8
	Color* colors = new Color[8]{ RED,RED,PURPLE,BLUE,PURPLE,PURPLE,DARK_BLUE,YELLOW };
	Color searchingColor = BLUE;
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
		case RED:
		{
			cout << "Red color." << endl;
			break;
		}
		case ORANGE:
		{
			cout << "Orange colore." << endl;
			break;
		}
		case YELLOW:
		{
			cout << "Yellow colore." << endl;
			break;
		}
		case GREEN:
		{
			cout << "Green colore." << endl;
			break;
		}
		case BLUE:
		{
			cout << "Blue color." << endl;
			break;
		}
		case DARK_BLUE:
		{
			cout << "Dark blue color." << endl;
			break;
		}
		case PURPLE:
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
			return RED;
		}
		case 1:
		{
			return ORANGE;
		}
		case 2:
		{
			return YELLOW;
		}
		case 3:
		{
			return RED;
		}
		case 4:
		{
			return BLUE;
		}
		case 5:
		{
			return DARK_BLUE;
		}
		case 6:
		{
			return PURPLE;
		}
	}
}

int CountRed(Color* colors, int count)
{
	int redCount = 0;

	for (int i = 0; i < count; i++)
	{
		if (colors[i] == RED)
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
	movieWithGenre.Genre = HORROR;
	movieWithGenre.Length = 122;
	movieWithGenre.Rating = 2.3;
	movieWithGenre.YearOfRelease = 2020;

	//2.2.9.3
	Movie* movie = MakeMovie("Cool Name", 69, 1999, DRAMA, 9.9);

	//2.2.9.4
	Movie** arrayOfMovies = new Movie * [10];
	arrayOfMovies[0] = MakeMovie("Film1", 114, 2000, ACTION, 8.1);
	arrayOfMovies[1] = MakeMovie("Film2", 95, 1971, COMEDY, 8.5);
	arrayOfMovies[2] = MakeMovie("Film3", 127, 2014, DRAMA, 7.9);
	arrayOfMovies[3] = MakeMovie("Film4", 89, 2014, DRAMA, 8.1);
	arrayOfMovies[4] = MakeMovie("Film5", 120, 1990, COMEDY, 8.2);
	arrayOfMovies[5] = MakeMovie("Film6", 134, 1994, COMEDY, 8.0);
	arrayOfMovies[6] = MakeMovie("Drive", 97, 2011, THRILLER, 7.2);
	arrayOfMovies[7] = MakeMovie("Film7", 168, 2010, ACTION, 7.1);
	arrayOfMovies[8] = MakeMovie("Film8", 93, 2012, BLOCKBUSTER, 3.5);
	arrayOfMovies[9] = MakeMovie("Film9", 228, 2003, DRAMA, 5.7);

	int countOfComedy =
		CountMoviesByGenre(arrayOfMovies, 10, COMEDY);
	cout << endl << "In ur films array " << countOfComedy <<
		"s comedy" << endl;
	//2.2.9.5
	Movie* bestMovieInGenre = FindBestGenreMovie(arrayOfMovies, 10, COMEDY);
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