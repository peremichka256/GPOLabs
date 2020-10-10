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
	int PagesCount;
	string* Authors;
	int AuthorsCount;
};

int FindBookByAuthor(Book*, int, string);

void SetTitle(Book&, string);
void SetPublicationYear(Book&, int);
void SetPages(Book&, int);
void SetAuthors(Book&, string*);
void SetAuthorsCount(Book&, int);