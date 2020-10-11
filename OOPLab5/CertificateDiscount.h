#pragma once
#include "DiscountBase.h"

class CertificateDiscount : public DiscountBase
{
private:
	double _amount;

public:
	CertificateDiscount(CategoryType category, double amount);

	void SetAmount(double amount);
	double GetAmount();

	double Calculate(Product* product);
};
