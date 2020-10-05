#include "GeometricProgram.h"

void GeometricProgram::DemoRing()
{
	Ring firstRing{ 3.6, 6.2, &Point(6.4,1) };
	cout << "Ring #" << firstRing.GetAllRingsCount() << " area = " << firstRing.GetArea() << endl;
	Ring secondRing{ 1.6, 15, &Point(-6.4,1) };
	cout << "Ring #" << secondRing.GetAllRingsCount() << " area = " << secondRing.GetArea() << endl;
	Ring thirdRing{ 4.4, 7.7, &Point(6.4,-1) };
	cout << "Ring #" << thirdRing.GetAllRingsCount() << " area = " << thirdRing.GetArea() << endl;

	try
	{
		Ring firstWrongRing{ -3.6, 6.2, &Point(6.4,1) };
	}
	catch (exception)
	{
		cout << "Error!!! Radii should be positive.\n";
	}

	try
	{
		Ring firstWrongRing{ 18.6, 6.2, &Point(6.4,1) };
	}
	catch (exception)
	{
		cout << "Error!!! External radius must be greater than internal.\n";
	}

	cout << "Rings count before constructor call: " << Ring::GetAllRingsCount()
		<< endl;
	Ring* ring = new Ring(5.0, 10.0, &Point(25.0, 25.0));
	cout << "Rings count after constructor call: " << Ring::GetAllRingsCount()
		<< endl;
	delete ring;
	cout << "Rings count after distructor call: " << Ring::GetAllRingsCount()
		<< endl;
}

void GeometricProgram::DemoCollision()
{
	Rectangle collisionRectangle1 = Rectangle(4.1, 2.1, &Point(2.1, 0.1));
	Rectangle collisionRectangle2 = Rectangle(8.1, 2.1, &Point(7.1, 1.1));

	if (CollisionManager::IsCollision(collisionRectangle1, collisionRectangle2))
	{
		cout << "Rectangles intersect(they should)\n";
	}

	Rectangle rectangle1 = Rectangle(4.2, 2.2, &Point(2, 0));
	Rectangle rectangle2 = Rectangle(1.6, 2, &Point(7, 1));

	if (CollisionManager::IsCollision(rectangle1, rectangle2) != true)
	{
		cout << "Rectangles do not intersect(they should not)\n";
	}

	Ring collisionRing1 = Ring(1.1, 2, &Point(0, 0));
	Ring collisionRing2 = Ring(1.5, 3, &Point(4, 2));

	if (CollisionManager::IsCollision(collisionRing1, collisionRing2))
	{
		cout << "Rings intersect(they should))\n";
	}

	Ring ring1 = Ring(1.1, 2, &Point(0, 0));
	Ring ring2 = Ring(1.5, 1.9, &Point(4, 2));

	if (CollisionManager::IsCollision(ring1, ring2) != true)
	{
		cout << "Rings do not intersect(they should not)\n";
	}
}
