#pragma once
#include "Structs/Rectangle.h"
#include "Structs/Flight.h"
#include "Structs/Movie.h"
#include "Structs/Time.h"
#include <iostream>

using namespace std;

const int arrayOfRectanglesSize = 3;
const int arrayOfFlightsSize = 3;
const int arrayOfMoviesSize = 3;
const int arrayOfTimeSize = 5;

void DemoRectangle();
void WriteRectangle(Rectangle& rectangle);
void ReadRectangle(Rectangle& rectangle);
void FindRectangle(Rectangle* rectangles, int count);
void FindMaxRectangle(Rectangle* rectangles, int count);
void DemoReadAndWriteRectangle();
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

void DemoFlight();

void DemoTime();

void WrongPointers();