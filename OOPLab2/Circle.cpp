#include "Circle.h"
//TODO: ������ ����� ��������� ���� � ������� ����� � �������� "����� ����������"? ���������
Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = MakeCircle(
		circle.X,
		circle.Y,
		circle.Radius,
		circle.Color
	);
	return copiedCircle;
}