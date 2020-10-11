#include "CertificateDiscount.h"

void CertificateDiscount::SetAmount(double amount)
{
	if ((amount < 0) || (amount > 10000.0))
	{
		throw exception("amout should be positive and not more than 10000");
	}
	_amount = amount;
}

double  CertificateDiscount::GetAmount()
{
	return _amount;
}

CertificateDiscount::CertificateDiscount(CategoryType category, double amount) : DiscountBase(category)
{
	SetAmount(amount);
}

double  CertificateDiscount::Calculate(Product* product)
{
	if (this->GetCategory() == product->GetCategory())
	{
		if (this->GetAmount() >= product->GetCost())
		{
			double newCost = 0;
			this->SetAmount(this->GetAmount() - product->GetCost());
			return newCost;
		}
		else
		{
			double newCost = product->GetCost() - this->GetAmount();
			this->SetAmount(0);
			return newCost;
		}
	}
	else
	{
		return product->GetCost();
	}
}