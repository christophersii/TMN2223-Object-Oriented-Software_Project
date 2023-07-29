#ifndef PATIENT_h
#define PATIENT_h
#include "Homepage.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <limits>
#include <iomanip>

using namespace std;

class Patient:public Homepage				//inheritance
{
	string name;
	string gender;								//class declaration,implementation = lee/mizah/zaki
	string dob;									//main = holi,chris,ham
	string ic;									//G4 - goodmorning dr, we are from g4, first of all this is our class declaration and implementation i handing out this part to . . . .. 
	string address;
	int phone;
	int appointment1, appointment2, appointment3;
	int appointment_num;
	
	public:
	Patient();			//constructor
	~Patient(){};		//destroyer
	
	void viewprofile(string);
	void editprofile();
	void makeappointment();
	string getname();
	int Appointment1();		//day
	int Appointment2();		//month
	int Appointment3();		//slot@session
	void appnum(int);
	int getnum();
};

#endif
