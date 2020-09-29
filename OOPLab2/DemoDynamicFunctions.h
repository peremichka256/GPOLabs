#pragma once
#include "./StructsHeaders/Rectangle.h"
#include "./StructsHeaders/Flight.h"
#include "./StructsHeaders/Movie.h"
#include "./StructsHeaders/Time.h"
#include "./StructsHeaders/Circle.h"
#include <iostream>

using namespace std;

void DemoDynamicFlight();

void DemoDynamicFlights();

void FindShortestFlight(Flight* flights, int count);

void DemoCircle();
