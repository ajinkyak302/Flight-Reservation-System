#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int glob = 0;
int global = 10;

class d_booking		//class for domestic booking
{
	protected:
		int pnr;
		char f_d[10], toja[7], tojd[7];
		long int doj;
		int choice, src, dest;
	public:
		void d_pnr()
		{

			glob++;
			pnr = glob;

		}
		int j_detail()		//definition for domestic journey
		{
			cout<<"\nEnter Date Of Journey in the given for at (DDMMYY)."<<"Please enter a valid date."<<endl;
			cin>>doj;
			cout<<"1.Delhi\t2.Pune\t3.Mumbai\t4.Banglore"<<endl<<endl;
			cout<<"Enter location of Departure: "<<endl;
			cin>>src;
			cout<<"Enter location of Arrival: "<<endl;
			cin>>dest;

			if((src == 1 && dest == 2) || (src == 2 && dest == 1))
			{
				cout<<"\t \t \tFlights Found"<< endl<<endl;
				cout<<"\nCAUTION : Displayed Timings are based on Indian Standard Time (IST)\n";
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
				cout<<"2.Spicejet\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
			}

			else if((src == 1 && dest == 3) || (src == 3 && dest == 1))
			{
				cout<<"\t \t \tFlights Found"<<endl<<endl;
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
				cout<<"2.Spicejet\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
			}

			else if((src == 1 && dest == 4) || (src == 4 && dest == 1))
			{
				cout<<"\t \t \tFlights Found"<<endl<<endl;
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
				cout<<"2.Spicejet\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
			}

			else if((src == 2 && dest == 3) || (src == 3 && dest == 2))
			{
				cout<<"\t \t \tFlights Found"<<endl<<endl;
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
				cout<<"2.Spicejet\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
			}

			else if((src == 2 && dest == 4) || (src == 4 && dest == 2))
			{
				cout<<"\t \t \tFlights Found"<<endl<<endl;
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
				cout<<"2.Spicejet\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
			}

			else if((src == 3 && dest == 4) || (src == 4 && dest == 3))
			{
				cout<<"\t \t \tFlights Found"<<endl<<endl;
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Indigo\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
				cout<<"2.Spicejett\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
				cout<<"3.Vistara\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
			}

			else if(src == dest)
			{
				cout<<"\nSource and destination can't be same.\nTry again\n\n\n"<<endl;
				return j_detail();
			}

			else
			{
				cout<<"\nWrong input entered\nTry again\n\n\n"<<endl;
				return j_detail();
			}
		}

		int select_flight()	//declaration and definition for selecting flight
		{
			cout<<"\nEnter your choice"<<endl;
			cin>>choice;
			switch(choice)
			{
			case 1:
				cout<<"\nFlight selected:"<<endl;
				cout<<"Indigo"<<endl;
				strcpy(f_d, "Indigo");             	//copy to string
				cout<<"Departure Time : 08:00"<<endl;
				cout<<"Arrival Time: 11:05"<<endl;
				strcpy(tojd, "8:00");
				strcpy(toja, "11:05");
				break;

			case 2:
				cout<<"\nFlight selected:"<<endl;
				cout<<"Spicejet"<<endl;
				strcpy(f_d, "Spicejet");
				cout<<"Departure Time : 14:00"<<endl;
				cout<<"Arrival Time: 17:05"<<endl;
				strcpy(tojd, "14:00");
				strcpy(toja, "17:05");
				break;

			case 3:
				cout<<"\nFlight selected:"<<endl;
				cout<<"Vistara"<<endl;
				strcpy(f_d, "Vistara");
				cout<<"Departure Time : 19:00"<<endl;
				cout<<"Arrival Time: 22:05"<<endl;
				strcpy(tojd, "19:00");
				strcpy(toja, "22:05");
				break;

			default:
				cout<<"Wrong input entered.\nTry again"<<endl;
				return select_flight ();
			}
		}
};

class i_booking		//class for international booking
{
	protected:			//protected members
		int pnri;
		char f_i[10], tojai[7], tojdi[7];
		long int doji;
		int srci, desti, choicei;
	public:
		void i_pnr()
		{
			global ++;
			pnri = global;
		}

		int j_detaili()
		{
			cout<<"Enter Date of Journey in the given format (DDMMYY)."<<"Please enter a valid date."<<endl;
			cin>>doji;
			cout<<"\n\n\n1.UK-Heathrow Airport \n2.Dubai International Airport \n3.India-Indira Gandhi International Airport \n4.Singapore Changi Airport \n5.USA-Los Angeles International Airport "<<endl<<endl;
			cout<<"Enter location of Departure : "<<endl;
			cin>>srci;
			cout<<"Enter location of Arrival : \n";
			cin>>desti;
			cout<<"\n\nFlights Found"<<endl<<endl;

			if((srci == 1 && desti == 3) || (srci == 3 && desti == 1))
			{
				cout<<"\nCAUTION : Displayed Timings are based on Indian Standard Time (IST)\n";
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
			}

			else if((srci == 1 && desti == 4) || (srci == 4 && desti == 1))
			{
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
			}

			else if((srci == 1 && desti == 5) || (srci == 5 || desti == 1))
			{
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
			}

			else if((srci == 2 && desti == 3) || (srci == 3 && desti == 2))
			{
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
			}

			else if((srci == 2 && desti == 4) || (srci == 4 && desti == 2))
			{
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs41259\tRefundable\n";
			}

			else if((srci == 2 && desti == 5) || (srci == 5 && desti == 2))
			{
				cout<<"Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
				cout<<"1.Etihad\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
				cout<<"2.Lufthansa\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
				cout<<"3.Emirates\t18:00\t\t22:05\t\tRs81478\tRefundable\n";
			}

			else if(srci == desti)
			{
				cout<<"wrong input entered.\nTry again\n\n\n"<<endl;
				return j_detaili();
			}

			else
			{
				cout<<"Wrong input entered.\nTry again\n\n\n";
				return j_detaili ();
			}
		}

		int select_flighti()	//declaration and definition for selecting flight
		{
			cout << "\nEnter your choice" << endl;
			cin >> choicei;
			switch (choicei)
			{
			case 1:
				cout << "\nFlight selected:" << endl;
				cout << "Etihad" << endl;
				strcpy (f_i, "Etihad");
				cout << "Departure Time: 10:00" << endl;
				cout << "Arrival Time: 14:05" << endl;
				strcpy (tojdi, "10:00");
				strcpy (tojai, "14:05");
				break;

			case 2:
				cout << "\nFlight selected:" << endl;
				cout << "Lufthansa" << endl;
				strcpy (f_i, "Lufthansa");
				cout << "Departure Time: 14:00" << endl;
				cout << "Arrival Time: 18:05" << endl;
				strcpy (tojdi, "14:00");
				strcpy (tojai, "18:05");
				break;

			case 3:
				cout << "\nFlight selected:" << endl;
				cout << "Emirates" << endl;
				strcpy (f_i, "Emirates");
				cout << "Departure Time : 18:00" << endl;
				cout << "Arrival Time: 22:05" << endl;
				strcpy (tojdi, "18:00");
				strcpy (tojai, "22:05");
				break;

			default:
				cout << "Wrong input entered" << endl;
				return select_flighti ();
			}
		}
};

class passenger:public d_booking, public i_booking  //class passenger publicly inherited from class d_booking and i_booking
{
	protected:
		char f_name[20], l_name[20], email[50];
		int age, gender;
		long int c_no;

	public:
		void p_detail(int x)
		{
			if(x == 1)
			{
				j_detail ();		//function call
				select_flight ();
			}

			else
			{
				j_detaili();
				select_flighti();
			}

			cout<<"\n\n\nEnter Passenger Details";
			cout<<"\nFirst Name: ";
			cin>>f_name;
			cout<<"Last Name: ";
			cin>>l_name;
		}

		int gender_check()
		{
			cout<<"\nGender :\n1.Male\n2.Female\n";
			cin>>gender;
			if(gender > 2)
			{
				cout<<"\n\nWrong input entered.\nTry again\n\n"<<endl;
				return gender_check();
			}
		}

		void more_details()
		{
			cout<<"Age  : ";
			cin>>age;
			cout<<"Email ID: ";
			cin>>email;
			cout<<"Contact number (10 digits): ";
			cin>>c_no;
			cout<<"\n\nDetails Entered :\n";
			cout<<"Name: "<< f_name<<" "<<l_name<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Email ID: "<<email<<endl;
			cout<<"Contact number: "<<c_no<<endl;
		}

		int getpnr()		//to get Passenger Name Record(PNR)
		{
			return pnr;
		}

		int getpnri()
		{
			return pnri;
		}

		void disp()
		{
			cout<<"PNR :"<<pnr<<endl;
			cout<<"Flight :"<<f_d<<endl;
			cout<<"Name :"<<f_name<<" "<<l_name<<endl;
			cout<<"Date of Boarding :"<<doj<<endl;
			cout<<"Departure Time :"<<tojd<<endl;
			cout<<"Arrival Time :"<<toja;
		}

		void dispi ()		//to display details for international booking
		{
			cout<<"PNR : "<<pnri<<endl;
			cout<<"Flight : "<<f_i<<endl;
			cout<<"Name : "<<f_name<<" "<<l_name<<endl;
			cout<<"Date of Boarding : "<<doji<<endl;
			cout<<"Departure Time : "<<tojdi<<endl;
			cout<<"Arrival Time : "<<tojai;
		}
};

class payment
{
	protected:
		long int choice1, bank, card, date, cvv, user_id;
		char password[10];
	public:
		void pay_detail()
		{
			cout<<"\n\n\nHow would you like to pay?\n";
			cout<<"\n1.Debit Card \n2.Credit Card \n3.Net Banking";
			cout<<"\n\nEnter your choice";
			cin>>choice1;

			switch(choice1)
			{
			case 1:
				cout<<"\nEnter card number (16 digit): ";
				cin>>card;
				cout<<"\nEnter expiry date in the given format (MMYY): ";
				cin>>date;
				cout<<"\nEnter CVV number: ";
				cin>>cvv;
				cout<<"\nTransaction Successful\n";
				break;

			case 2:
				cout<<"\nEnter card number (16 digit): ";
				cin>>card;
				cout<<"\nEnter expiry date in the given format (MMYY): ";
				cin>>date;
				cout<<"\nEnter password: ";
				cin>>password;
				cout<<"\nTransaction Successful\n";
				break;

			case 3:
				cout<<"Banks Available: \n1.HDFC Bank \n2.Bank of India \n3.Standard Chartered Bank \n4.Swiss Bank \n5.Others";
				cout<<"\nSelect your bank: ";
				cin>>bank;
				cout<<"\nYou have selected: "<<bank;
				cout<<"\nEnter Customer ID: ";
				cin>>user_id;
				cout<<"\nEnter Pin: ";
				cin>>password;
				cout<<"\nTransaction Successful\n";
				break;

			default:
				cout<<"\nWrong input entered.\nTry again\n\n";
				return pay_detail();
			}
		}
};

void createfile(passenger p)	                                       //file creation for domestic booking
{
	ofstream fin("domestic.txt", ios::binary | ios::app);
	fin.write((char*)&p, sizeof(p));
	fin.close();
}

void cancelticket(int x)		                                        //function to cancel ticket
{
	passenger p;
	int f = 0;
	ifstream fout;
	ofstream fin("domestic1.txt", ios::binary | ios::app);
	fout.read((char*)&p, sizeof(p));

	while(fout)
	{
		if(p.getpnr() != x)
			fin.write((char *)&p, sizeof(p));

		else
		{
			p.disp();
			cout<<"\nYour Flight ticket is being cancelled!\n"<<"Amount refunded : Rs 1000\n";
			f++;			                                //incrementing f if PNR found
		}
		fout.read((char *)&p, sizeof(p));	        //reading another record from file
	}

	if(f == 0)			                            //if f==0,PNR not found
		cout<<"Ticket not found\n";

	fout.close();
	fin.close();
	remove("domestic.txt");	                    //deleting old file
	rename("domestic1.txt", "domestic.txt");	    //renaming new file
}

void checkticket (int x)		                        //function to check PNR or ticket
{
	passenger p;
	int f = 0;
	ifstream fout("domestic.txt", ios::binary);	//opening file
	fout.read((char*)&p, sizeof(p));

	while(fout)
	{
		if(p.getpnr() == x)	                        //checking PNR
		{
			p.disp();
			cout<<"\nYour ticket : "<<endl;
			f++;
			break;
		}
		fout.read((char*)&p, sizeof(p));
	}
	fout.close();
	if (f == 0)
		cout<<"Ticket not found"<<endl;
}

void createfilei(passenger p)	                                        //opening a file for international booking
{
	ofstream fin("international.txt", ios::binary | ios::app);
	fin.write((char*)&p, sizeof(p));
	fin.close();
}

void cancelticketi(int x)		                                        //function to cancel ticket
{
	passenger p;
	int f = 0;
	ifstream fout("international.txt", ios::binary | ios::app);
	ofstream fin("international1.txt", ios::binary | ios::app);
	fout.read((char*)&p, sizeof(p));
	while(fout)
	{
		if (p.getpnri() != x)
			fin.write ((char*) &p, sizeof(p));
		else
		{
			p.dispi();
			cout << "Your Above ticket is being Cancelled\n" <<
					"Amount refunded : Rs 10000\n";
			f++;
		}
		fout.read((char*)&p, sizeof(p));
	}

	if(f == 0)
		cout<<"\nTicket not found\n";

	fout.close();
	fin.close();
	remove("international.txt");
	rename("international1.txt", "international.txt");
}

void checkticketi(int x)		//to check PNR or ticket
{
	passenger p;
	int f = 0;
	ifstream fout("international.txt", ios::binary);
	fout.read((char*)&p, sizeof(p));
	while(fout)
	{
		if(p.getpnri() == x)	    //checking PNR
		{
			p.dispi();
			cout << "\nYour ticket" << endl;
			f++;
			break;
		}
		fout.read ((char *) &p, sizeof (p));
	}
	fout.close();
	if(f == 0)
		cout<<"Ticket not found"<<endl;
}

int main()
{
	d_booking d1;
	i_booking i1;
	passenger p1;
	payment p2;
	int ch, ch1, n;
	char input;
	do
	{
		system("CLS");
		cout<<"\n\nWelcome To Flight Reservation System"<<endl<<endl;
		cout<<"Book your Flight tickets at the best prices!\n"<<endl;
		cout<<"\n1.Book Flight \n2.Cancel Fight \n3.Check Ticket \n4.Exit"<<endl;
		cout<<"\nEnter your requirement : ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			system("CLS");
			cout<<"\n\n1.Domestic \n2.International"<<endl;
			cout<<"\nTerminal for Arrival/Departure : "<<endl;
			cin>>ch1;

			switch(ch1)
			{
			case 1:		                        //for booking domestic ticket
				p1.d_pnr();
				p1.p_detail(1);
				p1.gender_check();
				p1.more_details();
				p2.pay_detail();
				p1.disp();
				createfile(p1);
				break;

			case 2:		                        //for booking international ticket
				p1.p_detail(2);
				p1.i_pnr();
				p1.gender_check();
				p1.more_details();
				p2.pay_detail();
				p1.dispi();
				createfilei(p1);
				break;

			default:
				cout<<"Wrong input entered\nTry again\n\n\n"<<endl;
				return main();
			}
			break;

			case 2:                                         //for canceling ticket
				system("CLS");
				cout<<"1.Domestic Fights \n2.International Flights"<<endl;
				cout<<"\nPlease enter your option : "<<endl;
				cin>>ch1;

				if(ch1 == 1)
				{
					cout<<"Please enter your PNR number :"<<endl;
					cin>>n;
					cancelticket(n);	                    //for domestic booking cancellation
				}

				else if(ch1 == 2)
				{
					cout<<"Please enter your PNR number :"<<endl;
					cin>>n;
					cancelticketi(n);	                    //for international cancellation
				}

				else
				{
					cout<<"Wrong input entered\nTry again\n\n\n";
					return main();
				}
				break;

			case 3:		                                                //for displaying booked ticket details
				system ("CLS");
				cout<<"1.Domestic \n2.International"<<endl;
				cout<<"\nTerminal for Arrival/Departure : "<<endl;
				cin>>ch1;

				if(ch1 == 1)
				{
					cout<<"Please enter your PNR number :"<<endl;
					cin>>n;
					checkticket(n);
				}			                                        //to display domestic ticket details

				else if(ch1 == 2)
				{
					cout<<"Please enter your PNR number :"<<endl;
					cin>>n;
					checkticketi(n);
				}

				else
				{
					cout<<"Wrong input entered.\nTry again\n\n\n";
					return main();
				}
				break;

			case 4:
				system("CLS");
				return 0;

			default:
				cout<<"Wrong input entered\nTry again.\n\n\n\n"<<endl;
				return main();
		}

		cout<<"\n\n\nDo you wish to continue:(y/Y)"<<endl;
		cin>>input;
	}
	while(input == 'Y' || input == 'y');

	return 0;
}
