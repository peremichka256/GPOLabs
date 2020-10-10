#pragma once
#include "Color.h"
#include "DayOfWeek.h"
#include "FormOfEducation.h"
#include "Genre.h"
#include "ManufacturerOfSmartphones.h"
#include "Season.h"
#include <iostream>
#include "DemoFunctions.h"
#include "DemoDynamicFunctions.h"

using namespace std;

void DemoEnums();

void WriteColor(Color color);

Color ReadColor();

int CountColor(Color* colors, int count, Color findedColor);

void DemoMovie();
int CountMoviesByGenre(Movie** movies, int count, Genre findGenre);
Movie* FindBestGenreMovie(Movie** movies, int count, Genre findGenre);
void DemoMovieWithGenre();