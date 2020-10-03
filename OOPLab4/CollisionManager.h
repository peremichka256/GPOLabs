#pragma once
#include "Rectangle.h"
#include "Ring.h"

static class CollisionManager
{
public:
	static bool IsCollision(Rectangle&, Rectangle&);
	static bool IsCollision(Ring&, Ring&);
};
