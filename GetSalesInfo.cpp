/*******************************************************************************
 * AUTHOR		: Zac Campos
 * STUDENT ID	: 1058476
 * ASSIGN #9	: Functions
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/18/18
 ******************************************************************************/

#include "header.h"

void GetSalesInfo(int accountNum, int day, int month,
				  int year, char county, float salesAmount,
				  int weight)
{
	cout << "Please Enter your Account Number: ";
	cin  >> accountNum;
	cin.ignore(1000, '\n');

	cout << "Please Enter the Sales Date.\n"
		 << "Enter Month: ";
	cin  >> month;
	cin.ignore(1000, '\n');

	cout << "Enter Day: ";
	cin  >> day;
	cin.ignore(1000, '\n');

	cout << "Enter Year: ";
	cin  >> year;
	cin.ignore(1000, '\n');

	cout << "Please Enter the County Code: ";
	cin.get(county);
	county = toupper(county);
	cin.ignore(1000, '\n');

	cout << "Please Enter the Sales Amount: ";
	cin  >> salesAmount;
	cin.ignore(1000, '\n');

	cout << "Please Enter the Weight: ";
	cin  >> weight;
	cin.ignore(1000, '\n');
	cout << endl;

	cout << "ACCT#: " << accountNum << endl;
	cout << "Sales Date: " << month << "/" << day << "/" << year << endl;
	cout << "County Code: " << county << endl;
	cout << "Sales Amount: " << salesAmount << endl;
	cout << "Weight: " << weight << endl;


}
