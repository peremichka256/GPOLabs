#pragma once
#include "Post.h"

class User
{
private:
	int _id;
	string _login;
	string _password;
	void SetId(int id);

public:
	User(int id, string login, string password);
	
	void SetLogin(string login);
	void SetPassword(string password);

	int GetId();
	string GetLogin();
	string GetPassword();
	
	bool IsCorrectPassword(string password);
};

User* Login(User** users, int usersCount, string enteredLogin,
	string enteredPassword);