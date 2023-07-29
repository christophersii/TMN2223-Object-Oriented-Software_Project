#ifndef PAYMENT_h
#define PAYMENT_h
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

class Payment
{
	float price;
	string cardname;
	string cardnumber;
	string cardexpired;
	int cardtype;
	int cardcvv;
	
	public:
	Payment();
	~Payment(){};
	
	void makepayment();	
	void paymentdetails(string);
	
};

#endif				//wuuuuuuuuu kelak lah malam		sabar masih ada brapa hari lagi ham@chris set masa
