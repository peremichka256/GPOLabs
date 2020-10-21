#include "CollisionManager.h"

bool CollisionManager::IsCollision(Rectangle& firstRectangle, Rectangle& secondRectangle)
{
	double difCoordinatesX = abs(firstRectangle.GetCenter()->GetX()
		- secondRectangle.GetCenter()->GetX());
	double sumLength = firstRectangle.GetLength() / 2
		+ secondRectangle.GetLength() / 2;
	bool isCollisionByXAxis = false;

	if (difCoordinatesX < sumLength)
	{
		isCollisionByXAxis = true;
	}

	double difCoordinatesY = abs(firstRectangle.GetCenter()->GetY()
		- secondRectangle.GetCenter()->GetY());
	double sumWidth = firstRectangle.GetWidth() / 2
		+ secondRectangle.GetWidth() / 2;

	bool isCollisionByYAxis = false;

	if (difCoordinatesX < sumLength)
	{
		isCollisionByYAxis = true;
	}

	return isCollisionByYAxis || isCollisionByXAxis;
}

bool CollisionManager::IsCollision(Ring& firstRing, Ring& secondRing)
{
	double difCoordinatesX = abs(firstRing.GetCenter()->GetX()
		- secondRing.GetCenter()->GetX());

	double difCoordinatesY = abs(firstRing.GetCenter()->GetY()
		- secondRing.GetCenter()->GetY());

	double distanceBetweenCentres = sqrt(difCoordinatesX * difCoordinatesX
		+ difCoordinatesY * difCoordinatesY);

	double sumRadii = firstRing.GetExternalRadius()
		+ secondRing.GetExternalRadius();
	
	return distanceBetweenCentres < sumRadii;
}