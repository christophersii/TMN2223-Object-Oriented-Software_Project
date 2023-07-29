#ifndef HOMEPAGE_h
#define HOMEPAGE_h
#include <iostream>
#include <string>

using namespace std;

class Homepage
{
	protected:
	string username;
	string password;
	
	public:
	Homepage();
	~Homepage(){};
	
	void login();						//polymorphism					//overload
	void login(string,string);			//polymorphism					//overload
	void changepassword();					//newpassword
	string getlogin();
	string getpassword();
};

#endif
