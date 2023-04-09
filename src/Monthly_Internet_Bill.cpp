/*
	Dirk Catpo
	CIS 165
	Date: 17 May 2020
	Description: This program allows someone to find their monthly bill using Siegels 
				 Internet Company interactively. It is made using functions. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float calcBill(int total_hours, char pack_letter); // function prototype 
void dispOutput(float bill, int total_hours, char pack_letter, int cust_ID); // function prototype

int main(void)
{
	// Local Declarations 
		int cust_ID, total_hours;
		char pack_letter;
		float bill;
		
	// Program Statements
		cout<<"\nPlease enter customer ID number: ";
		cin>>cust_ID;
		cout<<"Please enter package letter: ";
		cin>>pack_letter;
		cout<<"Please enter total hours used: ";
		cin>>total_hours;

		// Function call
		bill = calcBill(total_hours, pack_letter); 

		// Function call	
		dispOutput(bill, total_hours, pack_letter, cust_ID); 		
return 0;
}

float calcBill(int total_hours, char pack_letter)
{
	// Local Declarations 
		float bill;
		
	// Program Statements and also how packages are going to be calculated 
		if (pack_letter == 'A')
			if (total_hours <= 10)
				bill = 9.95;
			else
				bill = ((total_hours - 10) *2) + 9.95;
		else if (pack_letter == 'B')
			if (total_hours <= 20)
				bill = 14.95;
			else 
				bill = ((total_hours - 20) * 1) + 14.95;
		else
			bill = 19.95;
return bill;	
}

void dispOutput(float bill, int total_hours, char pack_letter, int cust_ID)  
{
	// This right here shows how the header will be displayed 
	cout<<"\n"
		<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
		<<"%           The Siegel Internet Company           %\n"
		<<"%                  Est. May 2020                  %\n"
		<<"%         1 Pine Street Paterson NJ 07505         %\n"
		<<"%             Telephone: (201)777-777             %\n"
		<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"
		<<"\n";
	
	// This shows how the output will be manipulated and arranged 
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"Customer number: \t\t"<<setw(14)<<cust_ID<<"\n"
		<<"Package purchased: \t\t\t"<<setw(6)<<pack_letter<<"\n"
		<<"Hours used: \t\t\t"<<setw(14)<<total_hours<<"\n"
		<<"Total monthly bill: \t\t\t"<<"$"<<setw(5)<<bill<<"\n"
		<<"\n";

return;
}

