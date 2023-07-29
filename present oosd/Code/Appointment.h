#ifndef Appointment_h
#define Appointment_h
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Appointment
{
	string patient_name;
	int day;
	string month;
	string slot;
	int appointment_id;
	
	public:
	Appointment();
	~Appointment(){};
	
	void createappointment(int,string);			//polymorphism
	void createappointment(int, int, int);		//polymorphism
	void appointmentdetail();
	string getmonth();
	string getpatientname();
	
};

#endif
