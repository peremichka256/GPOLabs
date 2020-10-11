#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
private:
	int _percent;

public:
	PercentDiscount(CategoryType category, int percent);

	int GetPercent();
	void SetPercent(int percent);

	double Calculate(Product* product);
};

