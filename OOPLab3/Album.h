#pragma once
#include "Song.h"

const int CURRENT_YEAR = 2020;

class Album
{
private:
	string _title;
	int _compositionYear;
	Song* _songs;
	int _songsCount;

public:
	Album(string title, int compositionYear, Song* songs, int songsCount);

	void SetTitle(string title);
	void SetCompositionYear(int compositionYear);
	void SetSongs(Song* songs, int songsCount);

	string GetTitle();
	int GetCompositionYear();
	Song* GetSongs();
	int GetSongsCount();
	Song* FindSong(string songName);
};

