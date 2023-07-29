#include "Patient.h"

Patient::Patient()
{
	phone=0;
	appointment1=0;
	appointment2=0;
	appointment3=0;
	appointment_num=0;
}

void Patient::editprofile()
{	
	int choice;
	
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                       EDIT PROFILE                     |\n";
	cout<<"\t|________________________________________________________|\n\n";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');				//<- what is this @ igore the ccurent line/everything that already printout 
	cout<<"\t Name                          : ";
	getline(cin,name);													//<- this what is the difference wuuuuu rehearsal wuuuu
	cout<<"\t Gender (1 - Male / 2 - Female): ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		{
			gender="Male";
			break;
		}
		case 2:
		{
			gender="Female";
			break;
		}
	}
	
	cout<<"\t Date of Birth (DD/MM/YY)      : ";
	cin>>dob;
	cout<<"\t IC Number (xxxxxx-xx-xxxx)    : ";
	cin>>ic;
	cout<<"\t Phone Number                  : +60";
	cin>>phone;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout<<"\t Address                       : ";
	getline(cin,address);
	
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                         Message                        |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Your profile has been saved successfully.              |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	system("PAUSE"); 
	system("CLS");
}

void Patient::viewprofile(string gmail)
{	
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                       VIEW PROFILE                     |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Name: "<<setw(47)<<name<<"  |\n";
	cout<<"\t| Date of Birth: "<<setw(38)<<dob<<"  |\n";
	cout<<"\t| IC Number: "<<setw(42)<<ic<<"  |\n";
	cout<<"\t| Gender: "<<setw(45)<<gender<<"  |\n";
	cout<<"\t| Phone Number: +60"<<setw(36)<<phone<<"  |\n";
	cout<<"\t| Address: "<<setw(44)<<address<<"  |\n";
	cout<<"\t| Email: "<<setw(46)<<gmail<<"  |\n";
	cout<<"\t|________________________________________________________|\n\n\t ";
	system("PAUSE"); 
	system("CLS");
}

void Patient::makeappointment()
{
	appointment1=0; appointment2=0; appointment3=0;
	while(appointment2==0)
	{
		system("CLS");
		cout<<"\n";
		cout<<"\t.________________________________________________________.\n";
		cout<<"\t|                          DAY                           |\n";
		cout<<"\t|--------------------------------------------------------|\n";
		cout<<"\t|  1-31 for (January)                                    |\n";
		cout<<"\t|  1-28 for (February)                                   |\n";
		cout<<"\t|  1-31 for (March)                                      |\n";
		cout<<"\t|  1-30 for (April)                                      |\n";
		cout<<"\t|  1-31 for (May)                                        |\n";
		cout<<"\t|  1-30 for (June)                                       |\n";
		cout<<"\t|  1-31 for (July)                                       |\n";
		cout<<"\t|  1-31 for (August)                                     |\n";
		cout<<"\t|  1-30 for (September)                                  |\n";
		cout<<"\t|  1-31 for (October)                                    |\n";
		cout<<"\t|  1-30 for (November)                                   |\n";
		cout<<"\t|  1-31 for (December)                                   |\n";
		cout<<"\t|________________________________________________________|\n";
		cout<<"\n\t Select day: ";
		cin>>appointment2;
		if(appointment2<=31)
		{
			break;
		}
		else
		{
			system("CLS");
			cout<<"\n";
			cout<<"\t.________________________________________________________.\n";
			cout<<"\t|                         DAY                            |\n";
			cout<<"\t|--------------------------------------------------------|\n";
			cout<<"\t| Error: Wrong keyword, please try again.                |\n";
			cout<<"\t|________________________________________________________|\n\n\t ";
			system("PAUSE");
			system("CLS");
			appointment2=0;
			continue;
		}
	}
	while(appointment1==0)
	{
		system("CLS");
		cout<<"\n";
		cout<<"\t.________________________________________________________.\n";
		cout<<"\t|                         MONTH                          |\n";
		cout<<"\t|--------------------------------------------------------|\n";
		cout<<"\t|  1 - January                                           |\n";
		cout<<"\t|  2 - February                                          |\n";
		cout<<"\t|  3 - March                                             |\n";
		cout<<"\t|  4 - April                                             |\n";
		cout<<"\t|  5 - May                                               |\n";
		cout<<"\t|  6 - June                                              |\n";
		cout<<"\t|  7 - July                                              |\n";
		cout<<"\t|  8 - August                                            |\n";
		cout<<"\t|  9 - September                                         |\n";
		cout<<"\t| 10 - October                                           |\n";
		cout<<"\t| 11 - November                                          |\n";
		cout<<"\t| 12 - December                                          |\n";
		cout<<"\t|________________________________________________________|\n";
		cout<<"\n\t Select month (1-12): ";
		cin>>appointment1;
		if(appointment1<=12)
		{
			break;
		}
		else
		{	
			system("CLS");
			cout<<"\n";
			cout<<"\t.________________________________________________________.\n";
			cout<<"\t|                        MONTH                           |\n";
			cout<<"\t|--------------------------------------------------------|\n";
			cout<<"\t| Error: Wrong keyword, please try again.                |\n";
			cout<<"\t|________________________________________________________|\n\n\t ";
			system("PAUSE");
			system("CLS");
			appointment1=0;
			continue;
		}
	}
	while(appointment3==0)
	{
		system("CLS");
		cout<<"\n";
		cout<<"\t.________________________________________________________.\n";
		cout<<"\t|                           SLOT                         |\n";
		cout<<"\t|--------------------------------------------------------|\n";
		cout<<"\t|  1 - 08:30AM - 09:00AM                                 |\n";
		cout<<"\t|  2 - 09:00AM - 09:30AM                                 |\n";
		cout<<"\t|  3 - 09:30AM - 10:00AM                                 |\n";
		cout<<"\t|  4 - 10:00AM - 10:30AM                                 |\n";
		cout<<"\t|  5 - 10:30AM - 11:00AM                                 |\n";
		cout<<"\t|  6 - 11:00PM - 11:30AM                                 |\n";
		cout<<"\t|  7 - 11:30PM - 12:00PM                                 |\n";
		cout<<"\t|  8 - 01:00PM - 01:30PM                                 |\n";
		cout<<"\t|  9 - 01:30PM - 02:00PM                                 |\n";
		cout<<"\t| 10 - 02:00PM - 02:30PM                                 |\n";
		cout<<"\t| 11 - 02:30PM - 03:00PM                                 |\n";
		cout<<"\t| 12 - 03:00PM - 03:30PM                                 |\n";
		cout<<"\t| 13 - 03:30PM - 04:00PM                                 |\n";
		cout<<"\t| 14 - 04:00PM - 04:30PM                                 |\n";
		cout<<"\t| 15 - 04:30PM - 05:00PM                                 |\n";
		cout<<"\t|________________________________________________________|\n";
		cout<<"\n\t Select slot: ";
		cin>>appointment3;
		if(appointment3<=15)
		{
			break;
		}
		else
		{	
			system("CLS");
			cout<<"\n";
			cout<<"\t.________________________________________________________.\n";
			cout<<"\t|                        SLOT                            |\n";
			cout<<"\t|--------------------------------------------------------|\n";
			cout<<"\t| Error: Wrong keyword, please try again.                |\n";
			cout<<"\t|________________________________________________________|\n\n\t ";
			system("PAUSE");
			system("CLS");
			appointment3=0;
			continue;
		}
	}
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                         Message                        |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Appointment booked, proceeding to payment.             |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	system("PAUSE"); 
	system("CLS");
}

void Patient::appnum(int num)
{
	appointment_num=num;
}

string Patient::getname()
{
	return name;
}

int Patient::Appointment1()
{
	return appointment1;
}

int Patient::Appointment2()
{
	return appointment2;
}

int Patient::Appointment3()
{
	return appointment3;
}

int Patient::getnum()
{
	return appointment_num;
}
