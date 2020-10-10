#include "Product.h"

Product::Product(string name, CategoryType category, int cost)
{
	SetName(name);
	SetCategory(category);
	SetCost(cost);
}

string Product::GetName()
{
	return this->_name;
}

CategoryType Product::GetCategory()
{
	return this->_category;
}

int Product::GetCost()
{
	return this->_cost;
}

void Product::SetName(string name)
{
	this->_name = name;
}

void Product::SetCategory(CategoryType category)
{
	this->_category = category;
}

void Product::SetCost(int cost)
{
	if ((cost < 0) || (cost > 100000))
	{
		throw exception("cost should be positive and not more than 100000");
	}
	this->_cost = cost;
}