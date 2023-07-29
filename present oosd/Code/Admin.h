#ifndef ADMIN_h
#define ADMIN_h
#include "Homepage.h"
#include <string>
#include <iostream>

using namespace std;

class Admin:public Homepage				//inheritance
{
	string loginid;
	string loginpass;
	
	public:
	Admin();					
	~Admin(){};
	
	void registeruser();			
	void viewuser(string);			
	string getpid();				
	string getppass();			
};

#endif

				//this one declaration				goodluck comrades :)
