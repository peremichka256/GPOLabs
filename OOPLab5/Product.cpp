#include "Product.h"

Product::Product(string name, CategoryType category, int cost)
{
	SetName(name);
	SetCategory(category);
	SetCost(cost);
}

string Product::GetName()
{
	return _name;
}

CategoryType Product::GetCategory()
{
	return _category;
}

int Product::GetCost()
{
	return _cost;
}

void Product::SetName(string name)
{
	_name = name;
}

void Product::SetCategory(CategoryType category)
{
	_category = category;
}

void Product::SetCost(int cost)
{
	if ((cost < 0) || (cost > 100000))
	{
		throw exception("cost should be positive and not more than 100000");
	}
	_cost = cost;
}