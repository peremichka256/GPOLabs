#include "Song.h"

Song::Song()
{
}

Song::Song(string title, int duration, Genre genre)
{
	SetTitle(title);
	SetDuration(duration);
	SetGenre(genre);
}

void Song::SetTitle(string title)
{
	this->_title = title;
}

void Song::SetDuration(int duration)
{
	if (duration < 0)
	{
		throw exception("duration of the song should be positive");
	}

	this->_duration = duration;
}

void Song::SetGenre(Genre genre)
{
	this->_genre = genre;
}

string Song::GetTitle()
{
	return this->_title;
}

int Song::GetDuration()
{
	return this->_duration;
}

Genre Song::GetGenre()
{
	return this->_genre;
}
