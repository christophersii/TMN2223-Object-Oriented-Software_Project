#include "Payment.h"

Payment::Payment()
{
	price=50.50;
	cardtype=0;
	cardcvv=0;
}

void Payment::makepayment()
{
	system("CLS");
	
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                     PAYMENT DETAILS                    |\n";
	cout<<"\t|________________________________________________________|\n";
	cout<<"\t Appointment booking price: RM "<<price<<endl;
	cout<<"\t Payment method (1 - Credit / 2 - Debit): ";
	cin>>cardtype;
	cout<<"\t Cardholder: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin,cardname);
	cout<<"\t Card Number(include - ): ";
	cin>>cardnumber;
	cout<<"\t Valid till: ";
	cin>>cardexpired;
	cout<<"\t CVV/CVC: ";
	cin>>cardcvv;
	
	system("CLS");
	cout<<"\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                         Message                        |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Processing payment.                                    |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	system("PAUSE"); 
	system("CLS");
}

void Payment::paymentdetails(string send)
{
	cout<<"\n";
	cout<<"\n\t Payment Success...\n";
	cout<<"\t.________________________________________________________.\n";
	cout<<"\t|                        Receipt                         |\n";
	cout<<"\t|--------------------------------------------------------|\n";
	cout<<"\t| Appointment booking price: RM "<<setw(24)<<price<< " |\n";
	cout<<"\t| Cardholder: " <<setw(42)<<cardname<<" |\n";
	cout<<"\t| Status:                                           Paid |\n";
	cout<<"\t| Payment details sent to "<<setw(30)<<send<<" |\n";
	cout<<"\t|________________________________________________________|\n\n\t  ";
	system("PAUSE"); 
	system("CLS");
}
