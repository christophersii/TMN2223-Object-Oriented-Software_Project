/*Project: Online Hospital Blood Test Appointment System
this code creted by group 4:
group member name:
Holifield William (L.G01)
69861

Muhd Hamarudin bin Omar Ali (L.G01)
70653

Christopher Sii How Chiong (L.G01)
69385

Mohd Zaki bin Ahmad Mustafa (L.G01)
72368

Siti Hamizah binti Zainul Abidin (L.G01)
72676

Ting Lee Ji (L.G01)
72713
*/

#include "Homepage.h"
#include "Admin.h"
#include "Patient.h"
#include "Appointment.h"
#include "Payment.h"
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	Homepage homepage; Admin admin; Patient patient[100]; Appointment appointment[100]; Payment payment;
	
	int select=0;
	int i=0;
	int app_id=10000;
	int x=0;
	

	
	while(select!=3)
	{
		cout<<"\n";
		cout<<"\t.________________________________________________________.\n";
		cout<<"\t|WELCOME TO ONLINE HOSPITAL BLOOD TEST APPOINTMENT SYSTEM|\n";
		cout<<"\t|--------------------------------------------------------|\n";
		cout<<"\t|                  1 - Admin                             |\n";      
		cout<<"\t|                  2 - Patient                           |\n";
		cout<<"\t|                  3 - Exit                              |\n";
		cout<<"\t|________________________________________________________|\n";
		cout<<"\n\t Enter Selection: ";
		cin>>select;
		system("CLS");
	
			switch(select)
			{
				case 1:		// this is me
				{
					homepage.login("admin","admin12#");
					int admin_select=0;
					cout<<"\n";
					cout<<"\t.________________________________________________________.\n";
					cout<<"\t|                      ADMIN LOGIN                       |\n";
					cout<<"\t|________________________________________________________|\n\n";
				
					admin.login();
						
					if(((admin.getlogin())==(homepage.getlogin()))&&((admin.getpassword())==(homepage.getpassword())))
					{	
						cout<<"\n";
						cout<<"\t.________________________________________________________.\n";
						cout<<"\t|                         Message                        |\n";
						cout<<"\t|--------------------------------------------------------|\n";
						cout<<"\t| Log in successful!                                     |\n";
						cout<<"\t|________________________________________________________|\n\n\t  ";
						system("PAUSE"); 
						system("CLS");
						
						while(admin_select!=4)
						{
							cout<<"\n";
							cout<<"\t.________________________________________________________.\n";
							cout<<"\t|                        ADMIN PAGE                      |\n";
							cout<<"\t|--------------------------------------------------------|\n";
							cout<<"\t| 1 - Register new user                                  |\n";
							cout<<"\t| 2 - User list                                          |\n";
							cout<<"\t| 3 - View all appointment                               |\n";
							cout<<"\t| 4 - Log Out                                            |\n";
							cout<<"\t|________________________________________________________|\n";
							cout<<"\n\t Enter Selection: ";
							cin>>admin_select;
						
							switch(admin_select)
							{	
								case 1:
								{
									admin.registeruser();
									patient[x].login(admin.getpid(),admin.getppass());
									x++;
									system("CLS");
									cout<<"\n";
									cout<<"\t.________________________________________________________.\n";
									cout<<"\t|                         Message                        |\n";
									cout<<"\t|--------------------------------------------------------|\n";
									cout<<"\t| Registration success.                                  |\n";
									cout<<"\t| An email has sent to: "<<setw(31)<<admin.getpid()<<"  |\n";
									cout<<"\t|________________________________________________________|\n\n\t ";
									system("PAUSE"); 
									system("CLS");
									break;
								}
								case 2:
								{	
									system("CLS");
									cout<<endl<<"\t List of registered user:\n\n";
									for(int k=0;k<100;k++)
									{
										if(!patient[k].getlogin().empty())
										{
											cout<<"\t  "<<k+1<<". "<<patient[k].getlogin()<<endl;
										}
										else
										{
											break;
										}
									}
									cout<<"\n\t "; 
									system("PAUSE"); 
									system("CLS");
									break;
								}
								case 3:
								{
									system("CLS");
									cout<< "\n\t";
									for(int j=0;j<100;j++)
									{
										if(!appointment[j].getmonth().empty())
										{
											appointment[j].appointmentdetail();
										}
										else if(app_id==10000)
										{
											
											cout<<"\n";
											cout<<"\t.________________________________________________________.\n";
											cout<<"\t|                         Message                        |\n";
											cout<<"\t|--------------------------------------------------------|\n";
											cout<<"\t| No appointment made by any patient.                    |\n";
											cout<<"\t|________________________________________________________|\n\n";
											
											break;
										}
									}
									cout<<"\n\t "; 
									system("PAUSE"); 
									system("CLS");
									break;
								}
								case 4:
								{
									system("CLS");
									cout<<"\n";
									cout<<"\t.________________________________________________________.\n";
									cout<<"\t|                         Message                        |\n";
									cout<<"\t|--------------------------------------------------------|\n";
									cout<<"\t| Logging Out...                                         |\n";
									cout<<"\t|________________________________________________________|\n\n\t ";
									system("PAUSE"); 
									system("CLS");
									break;
								}
								default:
								{
									cout<<"\n";
									cout<<"\t.________________________________________________________.\n";
									cout<<"\t|                      Error message                     |\n";
									cout<<"\t|--------------------------------------------------------|\n";
									cout<<"\t| Error: Wrong keyword, please try again.                |\n";
									cout<<"\t|________________________________________________________|\n\n\t ";
									system("PAUSE"); 
									system("CLS");
									break;
								}
							}
						}
					}
					else
					{
						cout<<"\n";
						cout<<"\t.________________________________________________________.\n";
						cout<<"\t|                      Error message                     |\n";
						cout<<"\t|--------------------------------------------------------|\n";
						cout<<"\t| Error: Wrong admin login info...                       |\n";
						cout<<"\t|________________________________________________________|\n\n\t ";
						system("PAUSE"); 
						system("CLS");
					}
					break;
				}
				case 2:		//this is chris
				{	
					int patient_select=0;
					cout<<"\n";
					cout<<"\t.________________________________________________________.\n";
					cout<<"\t|                      PATIENT LOGIN                     |\n";
					cout<<"\t|________________________________________________________|\n\n";
					cout<<"\t For Patient, use your email for your username. "<<endl;
					homepage.login();																//override
					
					for(int k=0;k<100;k++)
					{
						if(((homepage.getlogin())==(patient[k].getlogin()))&&((homepage.getpassword())==(patient[k].getpassword())))
						{
							cout<<"\n";
							cout<<"\t.________________________________________________________.\n";
							cout<<"\t|                         Message                        |\n";
							cout<<"\t|--------------------------------------------------------|\n";
							cout<<"\t| Log in successful!                                     |\n";
							cout<<"\t|________________________________________________________|\n\n\t  ";
							system("PAUSE"); 
							system("CLS");
							
							while(patient_select!=5)
							{
								system("CLS");
								cout<<"\n\t Hello, "<<patient[k].getlogin() << "\n";
								cout<<"\t.________________________________________________________.\n";
								cout<<"\t|                      PATIENT PAGE                      |\n";
								cout<<"\t|--------------------------------------------------------|\n";
								cout<<"\t| 1 - View Profile                                       |\n";
								cout<<"\t| 2 - Edit Profile                                       |\n";
								cout<<"\t| 3 - Make Appointment                                   |\n";
								cout<<"\t| 4 - View Appointment                                   |\n";
								cout<<"\t| 5 - Log out                                            |\n";
								cout<<"\t|________________________________________________________|\n\n";
								cout<<"\t Enter selection: ";
								cin>>patient_select;
								system("CLS");
						
								switch(patient_select)
								{
									case 1:
									{
										patient[k].viewprofile(patient[k].getlogin());
										break;
									}
									case 2:
									{
										int option=0;
									
										system("CLS");
										cout<<"\n";
										cout<<"\t.________________________________________________________.\n";
										cout<<"\t|                        EDIT PAGE                       |\n";
										cout<<"\t|--------------------------------------------------------|\n";
										cout<<"\t| 1 - Edit profile details                               |\n";
										cout<<"\t| 2 - Change password                                    |\n";
										cout<<"\t| 3 - Back                                               |\n";
										cout<<"\t|________________________________________________________|\n\n";
										cout<<"\t Enter selection: ";
										cin>> option;
									
										switch(option)
										{
											case 1:
												{	
													patient[k].editprofile();
													break;
												}
											case 2:
												{
													patient[k].changepassword();
													break;
												}
											case 3:
												{
													system("CLS");
													cout<<"\n";
													cout<<"\t.________________________________________________________.\n";
													cout<<"\t|                         Message                        |\n";
													cout<<"\t|--------------------------------------------------------|\n";
													cout<<"\t| Profile detail unchanged!                              |\n";
													cout<<"\t|________________________________________________________|\n\n\t ";
													system("PAUSE"); 
													system("CLS");
											}
										default:
											{
												cout<<"\n";
												cout<<"\t.________________________________________________________.\n";
												cout<<"\t|                      Error message                     |\n";
												cout<<"\t|--------------------------------------------------------|\n";
												cout<<"\t| Error: Wrong keyword, please try again.                |\n";
												cout<<"\t|________________________________________________________|\n\n\t ";
												system("PAUSE"); 
												system("CLS");
												break;
											}
									}
									break;
								}
								case 3:		//this ham
								{
									patient[k].makeappointment();
									patient[k].appnum(i);						//multiple appointment
									i++;								//increase number of appointment for current user each time this is called
									app_id++;							//increase appointment id each time this is called
						
									appointment[patient[k].getnum()].createappointment(patient[k].Appointment2(),patient[k].getname());					//set day
									appointment[patient[k].getnum()].createappointment(patient[k].Appointment1(),patient[k].Appointment3(),app_id);		//set month&slot
					
									payment.makepayment();		
									payment.paymentdetails(patient[k].getlogin());
									break;
								}
								case 4:
								{	
									for(int j=0;j<100;j++)
									{
										if((appointment[j].getpatientname()==patient[k].getname())&&(!patient[k].getname().empty()))
										{
											appointment[j].appointmentdetail();
										}
										else if(patient[k].Appointment1()==0)
										{
											cout<<"\n";
											cout<<"\t.________________________________________________________.\n";
											cout<<"\t|                         Message                        |\n";
											cout<<"\t|--------------------------------------------------------|\n";
											cout<<"\t| Dear patient, you have not book any appointment yet.   |\n";
											cout<<"\t|________________________________________________________|\n";
											
											break;	
										}	
									}
									cout<< "\n\t";
									system("PAUSE");
									break;
								}
								case 5:
								{
									system("CLS");
									cout<<"\n";
									cout<<"\t.________________________________________________________.\n";
									cout<<"\t|                         Message                        |\n";
									cout<<"\t|--------------------------------------------------------|\n";
									cout<<"\t| Logging Out...                                         |\n";
									cout<<"\t|________________________________________________________|\n\n\t ";
									system("PAUSE"); 
									system("CLS");
									break;
								}
								default:
								{
									cout<<"\n";
									cout<<"\t.________________________________________________________.\n";
									cout<<"\t|                      Error message                     |\n";
									cout<<"\t|--------------------------------------------------------|\n";
									cout<<"\t| Error: Wrong keyword, please try again.                |\n";
									cout<<"\t|________________________________________________________|\n\n\t ";
									system("PAUSE"); 
									system("CLS");
									break;
								}
							}
						}
					}
					else if((homepage.getlogin())!=(patient[k].getlogin()))				//compare username
					{
						continue;
					}
					else
					{
						cout<<"\n";
						cout<<"\t.________________________________________________________.\n";
						cout<<"\t|                      Error message                     |\n";
						cout<<"\t|--------------------------------------------------------|\n";
						cout<<"\t| Error: Wrong login info...                             |\n";
						cout<<"\t|________________________________________________________|\n\n\t ";
						system("PAUSE"); 
						system("CLS");
						break;
					}
				}
				break;
			}
			case 3:
				system("CLS"); 
				cout<<"\t.________________________________________________________.\n";
				cout<<"\t|                        message                         |\n";
				cout<<"\t|--------------------------------------------------------|\n";
				cout<<"\t| Exiting program...                                     |\n";
				cout<<"\t|________________________________________________________|\n\n\t ";
				system("PAUSE");
				break;
			default:
			{
				cout<<"\n";
				cout<<"\t.________________________________________________________.\n";
				cout<<"\t|                      Error message                     |\n";
				cout<<"\t|--------------------------------------------------------|\n";
				cout<<"\t| Error: Wrong keyword, please try again.                |\n";
				cout<<"\t|________________________________________________________|\n\n\t ";
				system("PAUSE"); 
				system("CLS");
				break;
			}
			
		}
	}
	return 0;
}
