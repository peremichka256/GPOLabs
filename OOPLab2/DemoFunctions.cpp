#include "DemoFunctions.h"

void DemoRectangle()
{
	//2.2.3.1
	Rectangle rectangle;
	rectangle.Color = "Red";
	rectangle.Length = 10;
	rectangle.Width = 20;

	//2.2.3.2
	Rectangle userRectagle;
	cout << endl << "Enter color: ";
	cin >> userRectagle.Color;
	cout << "Enter length: ";
	cin >> userRectagle.Length;
	cout << "Enter width: ";
	cin >> userRectagle.Width;
	cout << userRectagle.Color << " rectangle have size: "
		<< userRectagle.Length << "x"
		<< userRectagle.Width << endl<<endl;

	//2.2.3.3
	Rectangle arrayOfRectangles[arrayOfRectanglesSize];
	arrayOfRectangles[0].Color = "Red";
	arrayOfRectangles[0].Length = 12.76;
	arrayOfRectangles[0].Width = 76.6;

	arrayOfRectangles[1].Color = "Green";
	arrayOfRectangles[1].Length = 34.2;
	arrayOfRectangles[1].Width = 23;

	arrayOfRectangles[2].Color = "Blue";
	arrayOfRectangles[2].Length = 21.4;
	arrayOfRectangles[2].Width = 31;

	for (int i = 0; i < arrayOfRectanglesSize; i++)
	{
		cout << "[" << i << "] "
			<< arrayOfRectangles[i].Color << " rectangle have size: "
			<< arrayOfRectangles[i].Length << "x"
			<< arrayOfRectangles[i].Width << endl;
	}
	cout << endl;

	//2.2.4.1
	Rectangle* firstPointerOnRectangle = &rectangle;
	cout << firstPointerOnRectangle->Color << " rectangle have size: "
		<< firstPointerOnRectangle->Length << "x"
		<< firstPointerOnRectangle->Width << endl;

	firstPointerOnRectangle->Color = "Purple";
	firstPointerOnRectangle->Length = 92.76;
	firstPointerOnRectangle->Width = 17.23;

	Rectangle* secondPointerOnRectangle = &rectangle;

	cout << "Address in first pointer: " << firstPointerOnRectangle << endl;
	cout << "Address in second pointer: " << secondPointerOnRectangle
		<< endl << endl;

	//2.2.5.4
	Exchange(arrayOfRectangles[1], arrayOfRectangles[2]);
	cout << "[" << 1 << "] ";
	WriteRectangle(arrayOfRectangles[1]);
	cout << "[" << 2 << "] ";
	WriteRectangle(arrayOfRectangles[2]);
}

void DemoFlight()
{
	//2.2.3.1
	Flight flight;
	flight.FlightTime = 156;
	flight.PointOfDeparture = "Tokyo";
	flight.PointOfDestination = "Singapore";

	//2.2.3.2
	Flight userFlight;
	cout << endl << "Enter flight time: ";
	cin >> userFlight.FlightTime;
	cout << "Enter point of departure: ";
	cin >> userFlight.PointOfDeparture;
	cout << "Enter point of destination: ";
	cin >> userFlight.PointOfDestination;
	cout << "Flight: "
		<< userFlight.PointOfDeparture << " - "
		<< userFlight.PointOfDestination << ", transit times "
		<< userFlight.FlightTime << " minutes" << endl << endl;

	//2.2.3.3
	Flight arrayOfFlights[arrayOfFlightsSize];

	arrayOfFlights[0].FlightTime = 245;
	arrayOfFlights[0].PointOfDeparture = "Krasnoyarsk";
	arrayOfFlights[0].PointOfDestination = "Moscow";

	arrayOfFlights[1].FlightTime = 120;
	arrayOfFlights[1].PointOfDeparture = "Kazan";
	arrayOfFlights[1].PointOfDestination = "Novosibirsk";

	arrayOfFlights[2].FlightTime = 720;
	arrayOfFlights[2].PointOfDeparture = "Gavana";
	arrayOfFlights[2].PointOfDestination = "Moscow";

	for (int i = 0; i < arrayOfFlightsSize; i++)
	{
		cout << "Flight " << i << ": "
			<< arrayOfFlights[i].PointOfDeparture << " - "
			<< arrayOfFlights[i].PointOfDestination << ", transit times "
			<< arrayOfFlights[i].FlightTime << " minutes" << endl;
	}
	cout << endl;

	//2.2.4.1
	Flight* firstPointerOnFlight = &flight;

	cout << "Flight: "
		<< firstPointerOnFlight->PointOfDeparture << " - "
		<< firstPointerOnFlight->PointOfDestination << ", transit times "
		<< firstPointerOnFlight->FlightTime << " minutes" << endl;

	Flight* secondPointerOnFlight = &flight;

	cout << "Address in first pointer: " << firstPointerOnFlight << endl;
	cout << "Address in second pointer: " << secondPointerOnFlight
		<< endl << endl;
}

void DemoMovie()
{
	//2.2.3.1
	Movie movie;
	//movie.Genre = "Horror";
	movie.Genre = Horror;
	movie.Length = 126;
	movie.Name = "The Conjuring";
	movie.Rating = 5.2;
	movie.YearOfRelease = 2012;

	//2.2.3.2
	Movie userMovie;
	cout << endl << "Enter film duration: ";
	cin >> userMovie.Length;
	//cout << "Enter genre: ";
	//cin >> userMovie.Genre;
	cout << "Enter name: ";
	cin >> userMovie.Name;
	cout << "Enter raiting: ";
	cin >> userMovie.Rating;
	cout << "Enter year of release: ";
	cin >> userMovie.YearOfRelease;
	cout << "Film \"" << userMovie.Name << "\" "
		<< userMovie.YearOfRelease << "th year of release, in the genre "
		<< userMovie.Genre << ", runs "
		<< userMovie.Length << " minutes and have raiting: "
		<< userMovie.Rating << endl << endl;

	//2.2.3.3
	//TODO: размер массива в переменную, использовать её
	//по заданию массив не динамический ещё, поэтому засунул размер в константу
	Movie arrayOfMovies[arrayOfMoviesSize];
	//arrayOfMovies[0].Genre = "Drama";
	arrayOfMovies[0].Genre = Drama;
	arrayOfMovies[0].Length = 126;
	arrayOfMovies[0].Name = "Name1";
	arrayOfMovies[0].Rating = 8.2;
	arrayOfMovies[0].YearOfRelease = 2002;

	//arrayOfMovies[1].Genre = "Horror";
	arrayOfMovies[1].Genre = Horror;
	arrayOfMovies[1].Length = 97;
	arrayOfMovies[1].Name = "Name2";
	arrayOfMovies[1].Rating = 6.8;
	arrayOfMovies[1].YearOfRelease = 2019;

	//arrayOfMovies[2].Genre = "Comedy";
	arrayOfMovies[2].Genre = Comedy;
	arrayOfMovies[2].Length = 100;
	arrayOfMovies[2].Name = "Name3";
	arrayOfMovies[2].Rating = 2.1;
	arrayOfMovies[2].YearOfRelease = 2004;

	for (int i = 0; i < arrayOfMoviesSize; i++)
	{
		cout << "Film \"" << arrayOfMovies[i].Name << "\" "
			<< arrayOfMovies[i].YearOfRelease << "th year of release, in the genre "
			<< arrayOfMovies[i].Genre << ", runs "
			<< arrayOfMovies[i].Length << " minutes and have raiting: "
			<< arrayOfMovies[i].Rating << endl;
	}
	cout << endl;

	//2.2.4.1
	Movie* firstPointerOnMovie = &movie;

	cout << "Film \"" << firstPointerOnMovie->Name << "\" "
		<< firstPointerOnMovie->YearOfRelease << "th year of release, in the genre "
		<< firstPointerOnMovie->Genre << ", runs "
		<< firstPointerOnMovie->Length << " minutes and have raiting: "
		<< firstPointerOnMovie->Rating << endl;

	Movie* secondPointerOnMovie = &movie;

	cout << "Address in first pointer: " << firstPointerOnMovie << endl;
	cout << "Address in second pointer: " << secondPointerOnMovie
		<< endl << endl;
}

void DemoTime()
{
	//2.2.3.1
	Time time;
	time.Hour = 12;
	time.Minute = 45;
	time.Second = 22;

	//2.2.3.2
	Time userTime;
	cout << endl << "Enter hour: ";
	cin >> userTime.Hour;
	cout << "Enter minute: ";
	cin >> userTime.Minute;
	cout << "Enter second: ";
	cin >> userTime.Second;
	cout << "You have entered " << userTime.Hour << ":"
		<< userTime.Minute << ":" << userTime.Second
		<< endl << endl;

	//2.2.3.3
	//TODO: см. выше
	Time arrayOfTime[arrayOfTimeSize];
	arrayOfTime[0].Hour = 7;
	arrayOfTime[0].Minute = 30;
	arrayOfTime[0].Second = 43;

	arrayOfTime[1].Hour = 20;
	arrayOfTime[1].Minute = 12;
	arrayOfTime[1].Second = 12;

	arrayOfTime[2].Hour = 00;
	arrayOfTime[2].Minute = 43;
	arrayOfTime[2].Second = 55;

	arrayOfTime[3].Hour = 03;
	arrayOfTime[3].Minute = 33;
	arrayOfTime[3].Second = 51;

	arrayOfTime[4].Hour = 13;
	arrayOfTime[4].Minute = 23;
	arrayOfTime[4].Second = 34;

	for (int i = 0; i < arrayOfTimeSize; i++)
	{
		cout << "Time №" << i << " "
			<< arrayOfTime[i].Hour << ":"
			<< arrayOfTime[i].Minute << ":"
			<< arrayOfTime[i].Second << endl;
	}
	cout << endl;

	//2.2.4.1
	Time* firstPointerOnTime = &time;

	cout << "First time: " << firstPointerOnTime->Hour << ":"
		<< firstPointerOnTime->Minute << ":" << firstPointerOnTime->Second << endl;

	Time* secondPointerOnTime = &time;

	cout << "Address in first pointer: " << firstPointerOnTime << endl;
	cout << "Address in second pointer: " << secondPointerOnTime
		<< endl << endl;
}

//2.2.4.4
void WrongPointers()
{
	Flight flight;
	Movie movie;

	Flight* pointerOnFlight = &flight;
	Movie* pointerOnMovie = &movie;

	//pointerOnFlight = &movie;
	//pointerOnMovie = &flight;
}

//2.2.5.1
void WriteRectangle(Rectangle& rectangle)
{
	cout << rectangle.Color << " rectangle have size: "
		<< rectangle.Length << "x"
		<< rectangle.Width << endl;
}

//2.2.5.2
void ReadRectangle(Rectangle& rectagle)
{
	cout << endl << "Enter color: ";
	cin >> rectagle.Color;
	cout << "Enter length: ";
	cin >> rectagle.Length;
	cout << "Enter width: ";
	cin >> rectagle.Width;
}

//2.2.5.3
void DemoReadAndWriteRectangle()
{
	//TODO: см.выше
	Rectangle arrayOfReactangles[arrayOfRectanglesSize];

	for (int i = 0; i < arrayOfRectanglesSize; i++)
	{
		ReadRectangle(arrayOfReactangles[i]);
	}

	for (int i = 0; i < arrayOfRectanglesSize; i++)
	{
		WriteRectangle(arrayOfReactangles[i]);
	}
}

//2.2.5.4
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle swap;
	swap = rectangle1;
	rectangle1.Color = rectangle2.Color;
	rectangle1.Length = rectangle2.Length;
	rectangle1.Width = rectangle2.Width;
	rectangle2.Color = swap.Color;
	rectangle2.Length = swap.Length;
	rectangle2.Width = swap.Width;
}

//2.2.5.5
void FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle max = rectangles[0];

	for (int i = 0; i < count; i++)
	{
		if (rectangles[i].Length > max.Length)
		{
			max = rectangles[i];
		}
	}

	cout << "Longest rectangle: " << endl;
	WriteRectangle(max);
}

//2.2.5.6
void FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle max = rectangles[0];

	for (int i = 0; i < count; i++)
	{
		if ((rectangles[i].Length * rectangles[i].Width)
	> (max.Length * max.Width))
		{
			max = rectangles[i];
		}
	}

	cout << "Rectangle with the largest area:" << endl;
	WriteRectangle(max);
}