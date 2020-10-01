#include "../ClassesHeaders/Album.h"

Album::Album(string title, int compositionYear, Song* songs, int songsCount)
{
	SetTitle(title);
	SetCompositionYear(compositionYear);
	SetSongs(songs, songsCount);
}

void Album::SetTitle(string title)
{
	this->_title = title;
}

void Album::SetCompositionYear(int compositionYear)
{
	if ((compositionYear > CURRENT_YEAR) && (compositionYear < 0))
	{
		throw exception("SetCompositionYear() error");
	}

	this->_compositionYear = compositionYear;
}

void Album::SetSongs(Song* songs, int songsCount)
{
	if (songsCount < 0)
	{
		throw exception("SetSongs() songscount error");
	}

	this->_songs = songs;
	this->_songsCount = songsCount;
}

string Album::GetTitle()
{
	return this->_title;
}

int Album::GetCompositionYear()
{
	return this->_compositionYear;
}

Song* Album::GetSongs()
{
	return this->_songs;
}

int Album::GetSongsCount()
{
	return this->_songsCount;
}

Song* Album::FindSong(string songName)
{
	for (int i = 0; i < this->_songsCount; i++)
	{
		if (this->GetSongs()[i].GetTitle() == songName)
		{
			return &this->GetSongs()[i];
		}
	}
	return nullptr;
}
