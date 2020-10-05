#pragma once
//TODO: Не надо было создавать физические папки для заголовочных файлов и cpp-файлов +
// есть файловая структура проекта (на жестком диске), а есть логическая структура проекта (в дереве VS) +
// В логической структуре проект VS разделен на две папки - для h-файлов и cpp-файлов. Файлы должны лежать в соответствующих папках. +
// В файловой же структуре этих папок не существует. То есть физически h- и cpp-файлы лежат в одной папке на жестком диске, хотя в проекте они лежат в двух подпапках. +
// Когда я оставлял замечание в прошлой лабе, я имел ввиду именно логическую структуру в проекте, а не папки в файловой структуре.
// При этом, если тебе надо сделать собственную смысловую подпапку в проекте, то физически на жестком диске ты создаешь одну папку, а в логической структуре проекта +
// ты создаешь по одной подпапке внутри папок для заголовочных файлов и cpp-файлов
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

