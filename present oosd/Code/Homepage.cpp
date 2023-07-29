#include "Homepage.h"

Homepage::Homepage()
{
	//
}

void Homepage::login()
{	
	cout<<"\t USERNAME: ";
	cin>>username;
	cout<<"\t PASSWORD: ";
	cin>>password;
	system("CLS");
}

void Homepage::login(string a,string b)			//admin 
{
	username=a;
	password=b;
}

void Homepage::changepassword()
{
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                    CHANGE PASSWORD                     |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	cout<<"\n\t New Password: ";
	cin>>password;
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                         Message                        |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Your password has been changed successfully.           |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	system("PAUSE"); 
	system("CLS");
}

string Homepage::getlogin()
{
	return username;
}

string Homepage::getpassword()
{
	return password;
}

