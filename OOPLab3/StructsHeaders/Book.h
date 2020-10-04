#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;
const int WHAT_YEAR = 2020;
const int BOOK_ARRAY_SIZE = 3;

struct Book
{
	string Title;
	int PublicationYear;
	int PageCount; //TODO: грамошибка. мн. число
	string* Autors; //TODO: грамошибка здесь и во всех соответствующих методах
	int AutorCount;//TODO: грамошибка
};

int FindBookByAuthor(Book*, int, string);

void SetTitle(Book&, string);
void SetPublicationYear(Book&, int);
void SetPages(Book&, int);
void SetAutors(Book&, string*);
void SetAutorCount(Book&, int);