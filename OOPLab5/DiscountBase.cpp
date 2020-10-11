#include "DiscountBase.h"

void DiscountBase::SetCategory(CategoryType category)
{
	_category = category;
}

CategoryType DiscountBase::GetCategory()
{
	return _category;
}

DiscountBase::DiscountBase(CategoryType category)
{
	SetCategory(category);
}

void ShowCheckWithDiscount(DiscountBase* discount, Product* products, int productsCount)
{
	double fullCost = 0;

	for (int i = 0; i < productsCount; i++)
	{
		cout << products[i].GetName() << "\t";
		cout << "Old cost: " << products[i].GetCost() << "\t";
		double newProductCost = discount->Calculate(&products[i]);
		fullCost += newProductCost;
		cout << "New cost: " << newProductCost << endl;
	}

	cout << "Full cost with discount: " << fullCost << endl;
}