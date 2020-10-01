#include "../StructsHeaders/Route.h"

int FindRouteByStop(Route* route, int routesCounter, string stop)
{
	for (int i = 0; i < routesCounter; i++)
	{
		for (int j = 0; j < route[i].StopCounter; j++)
		{
			if (route[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}

void SetRouteNumber(Route& route, int routeNumber)
{
	if ((routeNumber < 1))
	{
		throw exception("number Error");
	}
	route.RouteNumber = routeNumber;
}

void SetAverageDuration(Route& route, int averageDuration)
{
	if ((averageDuration < 60) || (averageDuration > 480))
	{
		throw exception("averageDuration Error");
	}
	route.AverageDuration = averageDuration;
}

void SetTrafficInterval(Route& route, int trafficInterval)
{
	if ((trafficInterval < 1) || (trafficInterval > 60))
	{
		throw exception("trafficInterval Error");
	}
	route.TrafficInterval = trafficInterval;
}

void SetStops(Route& route, string* stops)
{
	route.Stops = stops;
}

void SetStopCounter(Route& route, int stopCounter)
{
	if ((stopCounter < 1) || (stopCounter > 50))
	{
		throw exception("stopCounter Error");
	}
	route.StopCounter = stopCounter;
}