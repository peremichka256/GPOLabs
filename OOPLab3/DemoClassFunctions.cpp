#include "DemoClassFunctions.h"

void DemoRectangleWithPoint()
{
	Rectangle* rectangles = new Rectangle[RECTANGLES_ARRAY_SIZE];
	rectangles[0] = Rectangle(2.3, 4.12, &Point(128.2, 43.6));
	rectangles[1] = Rectangle(7.9, 12.1, &Point(38.2, -4.6));
	rectangles[2] = Rectangle(11.3, 2.1, &Point(-58.1, 73.9));
	rectangles[3] = Rectangle(28.3, 14.2, &Point(17.2, 223.0));
	rectangles[4] = Rectangle(54.7, 50.13, &Point(-90.2, 33.56));

	for (int i = 0; i < RECTANGLES_ARRAY_SIZE; i++)
	{
		cout << "X = " << rectangles[i].GetCenter()->GetX() << "; Y = "
			<< rectangles[i].GetCenter()->GetY() << "; Length = "
			<< rectangles[i].GetLength() << "; Width = "
			<< rectangles[i].GetWidth() << endl;
	}

	double xSum = 0;
	double ySum = 0;

	for (int i = 0; i < RECTANGLES_ARRAY_SIZE; i++)
	{
		xSum += rectangles[i].GetCenter()->GetX();
		ySum += rectangles[i].GetCenter()->GetY();
	}

	cout << "Centers average values: Xcenter = "
		<< xSum / RECTANGLES_ARRAY_SIZE << "; Ycenter = "
		<< ySum / RECTANGLES_ARRAY_SIZE;
	delete[] rectangles;
}

void DemoFlightWithTime()
{
	Flight* flights = new Flight [FLIGHTS_ARRAY_SIZE];
	flights[0] = Flight("J156", "Moscow", "Tomsk",
		&Time(2015, 1, 28, 12, 10), &Time(2015, 1, 28, 16, 50));
	flights[1] = Flight("S017", "Tokyo", "Shanghai",
		&Time(2016, 3, 2, 2, 0), &Time(2016, 3, 2, 5, 20));
	flights[2] = Flight("K98", "Paris", "Rome",
		&Time(2018, 11, 13, 22, 50), &Time(2018, 11, 14, 01, 10));
	flights[3] = Flight("L02", "New York", "Hague",
		&Time(2020, 5, 21, 23, 55), &Time(2020, 5, 22, 03, 20));
	flights[4] = Flight("JK12", "Sidney", "Auckland",
		&Time(2017, 9, 12, 12, 40), &Time(2017, 9, 12, 16, 20));

	for (int i = 0; i < FLIGHTS_ARRAY_SIZE; i++)
	{
		cout << flights[i].GetNumber() << " "
			<< flights[i].GetDeparturePoint() << "-"
			<< flights[i].GetDestinationPoint() << " Departure: "
			<< flights[i].GetDepartureTime()->GetDay() << "."
			<< flights[i].GetDepartureTime()->GetMonth() << "."
			<< flights[i].GetDepartureTime()->GetYear() << " "
			<< flights[i].GetDepartureTime()->GetHour() << ":"
			<< flights[i].GetDepartureTime()->GetMinute() << " Arrival: "
			<< flights[i].GetArrivalTime()->GetDay() << "."
			<< flights[i].GetArrivalTime()->GetMonth() << "."
			<< flights[i].GetArrivalTime()->GetYear() << " "
			<< flights[i].GetArrivalTime()->GetHour() << ":"
			<< flights[i].GetArrivalTime()->GetMinute() << endl;
	}
	cout << endl;

	for (int i = 0; i < FLIGHTS_ARRAY_SIZE; i++)
	{
		cout << flights[i].GetNumber() << " "
			<< flights[i].GetDeparturePoint() << "-"
			<< flights[i].GetDestinationPoint() << "Flght time: "
			<< flights[i].GetFlightTimeMinutes() << endl;
	}
	delete[] flights;
}

void DemoBand()
{
	Song firstAlbumSongs[4]{
		Song("Hello World", 123, Pop),
		Song("Never Give Up", 79, Rock),
		Song("Just Do It", 201, Pop),
		Song("Nice", 179, Rock)
	};
	Song secondAlbumSongs[4]
	{
		 Song("Not a lot of damage", 267, Jazz),
		 Song("Mad water", 189, Jazz),
		 Song("Candy pop", 76, Electronic),
		 Song("No way", 120, Electronic),
	};
	Song thirdAlbumSongs[4]
	{
		Song("Your welcome", 204, Classical),
		Song("Not classical music", 198, Classical),
		Song("Stop sleep", 128, Classical),
		Song("Bye World", 302, Jazz),
	};

	Album bandAlbums[3]
	{
		Album("First Cool Album", 2001, firstAlbumSongs, 4),
		Album("Second Nice Album", 2004, secondAlbumSongs, 4),
		Album("Incredible #3 Album", 2006, thirdAlbumSongs, 4),
	};

	Band band = Band("Good boys", "We are realy nice dudes from 2001", bandAlbums, 3);

	cout << endl << "Band \"" << band.GetTitle() << "\"" << endl
		<<"Descriprion: \""<<band.GetDescriprion()<<"\""<<endl
		<<"Albums are written: "<<band.GetAlbumsCount()<<endl;

	for (int i = 0; i < band.GetAlbumsCount(); i++)
	{
		Album currnetAlbum = band.GetAlbums()[i];

		cout << endl << "Album #" << i << ": \"" << currnetAlbum.GetTitle()
			<< "\", written in " << currnetAlbum.GetCompositionYear()
			<< " has " << currnetAlbum.GetSongsCount() << " songs:" << endl;

		for (int j = 0; j < currnetAlbum.GetSongsCount(); j++)
		{
			cout << "Song #" << j << " in album is: \"";
			PrintSong(currnetAlbum.GetSongs()[j]);
		}
	}
	
	cout << endl << "Enter title of the song you want to find: ";
	string findSong;
	cin.ignore(1);
	getline(cin, findSong);
	Song* foundSong = band.FindSong(findSong);
	
	if (foundSong != nullptr)
	{
		PrintSong(*foundSong);
	}
	else
	{
		cout << "Song not found";
	}
	
	cout << endl << "Enter title of the song for find album: ";
	string findAlbumSong;
	cin.ignore(1);
	getline(cin, findAlbumSong);
	Album* foundAlbum = band.FindAlbum(findAlbumSong);

	if (foundAlbum != nullptr)
	{
		cout << "This song in \"" << foundAlbum->GetTitle() << "\" album" << endl << endl;
	}
	else
	{
		cout << "Album not found";
	}

	int allSongsCount;
	Song* allSongs = band.GetAllSongs(allSongsCount);
	
	cout << endl;
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Band song #" << i << ": "
			<< allSongs[i].GetTitle() << endl;
	}
	delete[] allSongs;
	
	int genreSongsCount;
	cout << "Enter the Genre song you want to find ("
		<<"0 - Electronic; 1 - Rock; 2 - Pop, 3 - Jazz, 4 - Classical): ";
	int findGenreInt;
	cin >> findGenreInt;
	Genre findGenre;

	switch (findGenreInt)
	{
		case 0:
		{
			findGenre = Electronic;
			break;
		}
		case 1:
		{
			findGenre = Rock;
			break;
		}
		case 2:
		{
			findGenre = Pop;
			break;
		}
		case 3:
		{
			findGenre = Jazz;
			break;
		}
		case 4:
		{
			findGenre = Classical;
			break;
		}
	}

	Song* genreSongs = band.GetAllGenreSongs(findGenre, genreSongsCount);
	cout << "\nSongs in this genre:\n";
	
	for (int i = 0; i < genreSongsCount; i++)
	{
		cout << genreSongs[i].GetTitle() << endl;
	}
	delete[] genreSongs;
}