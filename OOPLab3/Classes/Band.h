#pragma once
#include "Album.h"

struct Band
{
private:
	string _title;
	string _descriprion;
	Album* _albums;
	int _albumsCount;

public:
	Band(string title, string descriprion, Album* albums, int albumsCount);

	void SetTitle(string title);
	void SetDescriprion(string descriprion);
	void SetAlbums(Album* albums, int albumsCount);

	Song* FindSong(string songTitle);
	Album* FindAlbum(string name);
	Song* GetAllSongs(int& allSongsCount);
	Song* GetAllGenreSongs(Genre findingGenre, int& allSongsCount);

	string GetTitle();
	string GetDescriprion();
	Album* GetAlbums();
	int GetAlbumsCount();
};

