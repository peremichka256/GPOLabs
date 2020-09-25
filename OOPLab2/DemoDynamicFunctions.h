#pragma once
#include "./Structs/Rectangle.h"
#include "./Structs/Flight.h"
#include "./Structs/Movie.h"
#include "./Structs/Time.h"
#include "./Structs/Circle.h"
#include <iostream>

using namespace std;

void DemoDynamicFlight();

void DemoDynamicFlights();

void FindShortestFlight(Flight* flights, int count);

void DemoCircle();
