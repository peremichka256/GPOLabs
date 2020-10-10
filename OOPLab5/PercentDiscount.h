#pragma once
#include "DiscountBase.h"

class PercentDiscount : public DiscountBase
{
private:
	int _percent;

public:
	int GetPercent();
	void SetPercent(int percent);

	PercentDiscount(CategoryType category, int percent);

	double Calculate(Product* product);
};

