#pragma once
#include "Rectangle.h"
#include "Ring.h"

static class CollisionManager
{
public:
	static bool IsCollision(Rectangle& firstRectangle, Rectangle& secondRectangle);
	static bool IsCollision(Ring& firstRing, Ring& secondRing);
};
