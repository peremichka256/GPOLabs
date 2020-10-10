#include "PercentDiscount.h"

int PercentDiscount::GetPercent()
{
	return this->_percent;
}

void PercentDiscount::SetPercent(int percent)
{
	if ((percent < 0) && (percent > 100))
	{
		throw exception("percent set between 0 and 100");
	}
	_percent = percent;
}

PercentDiscount::PercentDiscount(CategoryType category, int percent) : DiscountBase(category)
{
	SetPercent(percent);
}

double  PercentDiscount::Calculate(Product* product)
{
	if (product->GetCategory() == this->GetCategory())
	{
		double newCost = (product->GetCost() / 100) * (100 - this->GetPercent());
		return newCost;
	}
	else
	{
		return product->GetCost();
	}
}