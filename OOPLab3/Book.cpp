#include "Book.h"

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].AuthorsCount; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}

void SetTitle(Book& book, string title)
{
	book.Title = title;
}

void SetPublicationYear(Book& book, int publicationYear)
{
	if ((publicationYear < 1) || (publicationYear > WHAT_YEAR))
	{
		throw exception("publicationYear Error");
	}
	else
	{
		book.PublicationYear = publicationYear;
	}
}

void SetPages(Book& book, int pageNumber)
{
	if (pageNumber < 1)
	{
		throw exception("pages Error");
	}
	book.PagesCount = pageNumber;
}

void SetAuthors(Book& book, string* autors)
{
	book.Authors = autors;
}

void SetAuthorsCount(Book& book, int autorCounter)
{
	if ((autorCounter < 1) && (autorCounter > 10))
	{
		throw exception("autorCounter Error");
	}
	book.AuthorsCount = autorCounter;
}