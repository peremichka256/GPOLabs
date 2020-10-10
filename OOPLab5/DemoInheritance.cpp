#include "DemoInheritance.h"

void DemoInheritance::Users()
{
	User** users = new User * [USERS_COUNT]
	{
		new User(100000, "morkovka1995", "1995morkovka"),
			new User(100001, "ilon_mask", "X bruh A-12"),
			new User(100002, "megazver", "password"),
			new User(100003, "yogurt", "ksTPQzSu"),
			new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
			new PaidUser(200001, "system_exe", "UgfkDGmU"),
			new PaidUser(200002, "RazorQ", "TBgRnbCP"),
			new PaidUser(200003, "schdub", "CetyQVID"),
	};
	string login = "megazver";
	string password = "password";
	User* loginedUser = Login(users, USERS_COUNT, login, password);
	cout << "Signed in as: " << loginedUser->GetLogin() << endl;

	login = "system_exe";
	password = "UgfkDGmU";
	User* loginedPaidUser = Login(users, USERS_COUNT, login, password);
	cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;

	try
	{
		User wrongUser(200004, "k#a", "shish");
	}
	catch(exception)
	{
		cout << "Entered wrong login!" << endl;
	}

	try
	{
		PaidUser wrongPaidUser(200004, "{k#a{", "shishq");
	}
	catch (exception)
	{
		cout << "Entered wrong login!" << endl;
	}

	for (int i = 0; i < USERS_COUNT; i++)
	{
		delete users[i];
	}
	delete[] users;
}

void DemoInheritance::Persons()
{
	Person* person = new Person("Ivan", "Ivanov", "Ivanovich");
	Student* student = new Student("Petr", "Petrov", "Petrovich", 2018);
	Teacher* teacher
		= new Teacher("Ivan", "Petrov", "Vladimirovich", "Senior lecturer");

	ShowName(person);
	ShowName(student);
	ShowName(teacher);

	delete person;
	delete student;
	delete teacher;
}

void DemoInheritance::Discount()
{
	Product* products = new Product[3]
	{
		Product("G-2000-106", GPU, 12000),
		Product("Intel i7 7600", CPU, 20000),
		Product("Iphone X", SMARTPHONE, 27000)
	};

	CertificateDiscount* discountOnCPU = new CertificateDiscount(CPU, 10000.0);
	ShowCheckWithDiscount(discountOnCPU, products, 3);
	cout << "Certificate lost amount: " << discountOnCPU->GetAmount() << endl << endl;

	PercentDiscount* discountOnGPU = new PercentDiscount(GPU, 30);
	ShowCheckWithDiscount(discountOnGPU, products, 3);

	//DiscountBase(); невозможно

	delete[] products;

	delete discountOnCPU;
	delete discountOnGPU;
}
