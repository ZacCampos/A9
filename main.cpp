/*******************************************************************************
 * AUTHOR		: Zac Campos
 * STUDENT ID	: 1058476
 * ASSIGN #9	: Functions
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/18/18
 ******************************************************************************/

#include "header.h"

/*******************************************************************************
 * Functions
 * -----------------------------------------------------------------------------
 * This program will output the number of candidates accepted and the average
 * candidates accepted.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<The input is the applicants gender, height, and weight.>
 *
 * OUTPUT:
 * 	<This program will output the number of applicants accepted and the average
 * 		candidates accepted.>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  ASSIGN_NUM	= 9;
	const char ASSIGN_NAME[]= "Functions";

	// Input and Processing variables
	int accountNum = 0;
	int saleDay = 0;
	int saleMonth = 0;
	int saleYear = 0;
	char countyCode;
	float salesAmount = 0;
	int weight = 0;

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"<< setw(9) << ASSIGN_NUM	<< ": "	<< ASSIGN_NAME<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	/***************************************************************************
	 * INPUT -
	 **************************************************************************/
	GetSalesInfo(accountNum, saleDay, saleMonth,
					  saleYear, countyCode, salesAmount,
					  weight);
	/***************************************************************************
	 * PROCESSING -
	 **************************************************************************/

	/***************************************************************************
	 * OUTPUT -
	 **************************************************************************/

	return 0;
}
