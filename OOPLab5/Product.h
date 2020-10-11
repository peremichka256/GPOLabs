#pragma once
#include <string>
#include "CategoryType.h"

using namespace std;

class Product
{
private:
	string _name;
	CategoryType _category;
	int _cost;

public:
	Product(string name, CategoryType category, int cost);

	void SetName(string name);
	void SetCategory(CategoryType category);
	void SetCost(int cost);

	string GetName();
	CategoryType GetCategory();
	int GetCost();
};

