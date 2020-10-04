#include "../ClassesHeaders/Band.h"

Band::Band(string title, string descriprion, Album* albums, int albumsCount)
{
	SetTitle(title);
	SetDescriprion(descriprion);
	SetAlbums(albums, albumsCount);
}

void Band::SetTitle(string title)
{
	this->_title = title;
}

void Band::SetDescriprion(string descriprion)
{
	this->_descriprion = descriprion;
}

void Band::SetAlbums(Album* albums, int albumsCount)
{
	if (albumsCount < 0)
	{
		//TODO: проверить и исправить все сообщения в исключениях
		throw exception("SetAlbums() albumsCount error");
	}

	this->_albums = albums;
	this->_albumsCount = albumsCount;
}

Song* Band::FindSong(string songTitle)
{
	Song* foundSong = nullptr;

	for (int i = 0; i < this->_albumsCount; i++)
	{
		foundSong = this->_albums[i].FindSong(songTitle);

		if (foundSong != nullptr)
		{
			return foundSong;
		}
	}
	return foundSong;
}

Album* Band::FindAlbum(string name)
{
	for (int i = 0; i < this->_albumsCount; i++)
	{
		if (this->_albums[i].FindSong(name) != nullptr)
		{
			return &this->_albums[i];
		}
	}
	return nullptr;
}

Song* Band::GetAllSongs(int& allSongsCount)
{
	int allSongsCounter = 0;

	for (int i = 0; i < this->_albumsCount; i++)
	{
		allSongsCounter += this->GetAlbums()->GetSongsCount();
	}

	allSongsCount = allSongsCounter;

	Song* allSongs = new Song[allSongsCounter];

	int storedSongs = 0;

	for (int i = 0; i < this->GetAlbumsCount(); i++)
	{
		Album currentAlbum = this->GetAlbums()[i];

		for (int j = 0; j < currentAlbum.GetSongsCount(); j++)
		{
			Song* currentAlbumSongs = currentAlbum.GetSongs();
			allSongs[storedSongs] = currentAlbumSongs[j];
			storedSongs++;
		}
	}

	return allSongs;
}

Song* Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	int GenreSongCounter = 0;

	for (int i = 0; i < this->_albumsCount; i++)
	{
		Album currentAlbum = this->GetAlbums()[i];

		for (int j = 0; j < currentAlbum.GetSongsCount(); j++)
		{
			Song* currentAlbumSongs = currentAlbum.GetSongs();

			if (currentAlbumSongs[j].GetGenre() == findingGenre)
			{
				GenreSongCounter++;
			}
		}
	}
	allSongsCount = GenreSongCounter;
	Song* genreSongs = new Song[GenreSongCounter];

	int storedGenreSongs = 0;

	for (int i = 0; i < this->_albumsCount; i++)
	{
		Album currentAlbum = this->GetAlbums()[i];

		for (int j = 0; j < currentAlbum.GetSongsCount(); j++)
		{
			Song* currentAlbumSongs = currentAlbum.GetSongs();

			if (currentAlbumSongs[j].GetGenre() == findingGenre)
			{
				genreSongs[storedGenreSongs] = currentAlbumSongs[j];
				storedGenreSongs++;
			}
		}
	}

	return genreSongs;
}

string Band::GetTitle()
{
	return this->_title;
}

string Band::GetDescriprion()
{
	return this->_descriprion;
}

Album* Band::GetAlbums()
{
	return this->_albums;
}

int Band::GetAlbumsCount()
{
	return this->_albumsCount;
}
