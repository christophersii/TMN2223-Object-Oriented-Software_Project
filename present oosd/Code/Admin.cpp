#include "Admin.h"

Admin::Admin()
{
	//
}

void Admin::registeruser()
{	
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                      REGISTER USER                     |\n";
	cout<<"\t|________________________________________________________|\n\n";
	
	cout<<"\t User's Email: ";
	cin>>loginid;
	cout<<"\t Temporary Password: ";
	cin>>loginpass;
}

string Admin::getpid()
{
	return loginid;
}

string Admin::getppass()
{
	return loginpass;
}

void Admin::viewuser(string User)
{
	cout<<User<<endl;			//this one implementation @ kita implement semua method yg dh declare
	
}
