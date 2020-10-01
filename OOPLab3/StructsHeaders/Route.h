#pragma once
#include <iostream>
#include <string>
#include <exception>
using namespace std;
const int ROUTES_ARRAY_SIZE = 3;

struct Route
{
	int RouteNumber;
	int AverageDuration;
	int TrafficInterval;
	string* Stops;
	int StopCounter;
};

int FindRouteByStop(Route* route, int routesCounter, string stop);

void SetRouteNumber(Route& route, int routeNumber);
void SetAverageDuration(Route& route, int averageDuration);
void SetTrafficInterval(Route& route, int trafficInterval);
void SetStops(Route& route, string* stops);
void SetStopCounter(Route& route, int stopCounter);