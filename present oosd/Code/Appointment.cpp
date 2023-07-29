#include "Appointment.h"

Appointment::Appointment()
{
	day=0;
	appointment_id=0;
}

void Appointment::createappointment(int x,string patientname)
{	
	day=x;						//day
	patient_name=patientname;
}

void Appointment::createappointment(int y, int z, int id)
{			
	switch(y)				//month
	{
		case 1:
			{
				month="January";
				break;
			}
		case 2:
			{
				month="February";
				break;
			}
		case 3:
			{
				month="March";
				break;
			}
		case 4:
			{
				month="April";
				break;
			}
		case 5:
			{
				month="May";
				break;
			}
		case 6:
			{
				month="June";
				break;
			}
		case 7:
			{
				month="July";
				break;
			}
		case 8:
			{
				month="August";
				break;
			}
		case 9:
			{
				month="September";
				break;
			}
		case 10:
			{
				month="October";
				break;
			}
		case 11:
			{
				month="November";
				break;
			}
		case 12:
			{
				month="December";
				break;
			}	
	}
	
	switch(z)					//slot@session
	{
		case 1:
			{
				slot="08:30AM - 09:00AM";
				break;
			}
		case 2:
			{
				slot="09:00AM - 09:30AM";
				break;
			}
		case 3:
			{
				slot="09:30AM - 10:00AM";
				break;
			}
		case 4:
			{
				slot="10:00AM - 10:30AM";
				break;
			}
		case 5:
			{
				slot="10:30AM - 11:00AM";
				break;
			}
		case 6:
			{
				slot="11:00PM - 11:30AM";
				break;
			}
		case 7:
			{
				slot="11:30PM - 12:00PM";
				break;
			}
		case 8:
			{
				slot="01:00PM - 01:30PM";
				break;
			}
		case 9:
			{
				slot="01:30PM - 02:00PM";
				break;
			}
		case 10:
			{
				slot="02:00PM - 02:30PM";
				break;
			}
		case 11:
			{
				slot="02:30PM - 03:00PM";
				break;
			}
		case 12:
			{
				slot="03:00PM - 03:30PM";
				break;
			}
		case 13:
			{
				slot="03:30PM - 04:00PM";
				break;
			}
		case 14:
			{
				slot="04:00PM - 04:30PM";
				break;
			}
		case 15:
			{
				slot="04:30PM - 05:00PM";
				break;
			}
	}
	appointment_id=id;		//appointment id	
}

void Appointment::appointmentdetail()
{
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                    VIEW APPOINTMENT                    |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Appointment ID: "<<setw(37)<<appointment_id<<"  |\n";
	cout<<"\t| Patient name: "<<setw(39)<<patient_name<<"  |\n";
	cout<<"\t| Appointment date: "<<setw(22)<<day<<" / "<<setw(10)<<month<<"  |\n";
	cout<<"\t| Session: "<<setw(44)<<slot<<"  |\n";
	cout<<"\t|________________________________________________________|\n\n\t ";
}

string Appointment::getmonth()
{
	return month;
}

string Appointment::getpatientname()
{
	return patient_name;
}

