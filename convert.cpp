/*
**************************************************
*** Program:                                   *** 
***          Convert                           ***
**************************************************
*** Program Purpose:                           ***
***         Convert temperatures between       ***
***         Celcius and Fahrenheit             ***
**************************************************
*** Author:                                    ***
***         Hunar Roop Singh Kahlon            ***
**************************************************
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//All variables defined
	char origindegree;
	char finaldegree;
	float origintemp;
	float finaltemp;
	int example_loop = 0;

	
	//Program Info
	cout << "**************************************************" << endl;
	cout << "*** Program:                                   ***" << endl;
	cout << "***          Convert                           ***" << endl;
	cout << "**************************************************" << endl;
	cout << "*** Program Purpose :                          ***" << endl;
	cout << "***         Convert temperatures between       ***" << endl;
	cout << "***         Celcius and Fahrenheit             ***" << endl;
	cout << "**************************************************" << endl;
	cout << "*** Author :                                   ***" << endl;
	cout << "***         Hunar Roop Singh Kahlon            ***" << endl;
	cout << "**************************************************" << endl;
	cout << "\n\n\n";

	//Example Conversion
	//Example Run Predefined output without actual conversion
	cout << "**************************************************" << endl;
	cout << "*** Example Conversion                         ***" << endl;
	cout << "**************************************************" << endl;
	cout << "Enter original temperature:" << endl;
	cout << "6 C" << endl;
	cout << "**************************************************" << endl;
	while (example_loop < 10)
	{
		++example_loop;
	}
	cout << "The converted temperature is:" << endl;
	cout << "42.8 F" << endl;
	cout << "**************************************************" << endl;
	cout << "\n\n\n";

	//User Input
	cout << "**************************************************" << endl;
	cout << "*** Conversion	                               ***" << endl;
	cout << "**************************************************" << endl;
	cout << "Enter original temperature:" << endl;
	cin >> origintemp >> origindegree;
	cout << "**************************************************" << endl;
	
	//Input Verification
	if ((origindegree != 'C') && (origindegree != 'c') && (origindegree != 'F') && (origindegree != 'f'))
	{
		cout << "\n\n\n" << endl;
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;
		cout << "*** Error                                      ***" << endl;
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;
		cout << "I am sorry but you have wrong degree letter" << endl;
		cout << "entered. It must be either c, C, f, F" << endl;
		cout << "For example: 6 C or 6 F" << endl;
		cout << "**************************************************" << endl;
		cout << "**************************************************" << endl;

		//End Program
		return 0;
	}
	else if ((origindegree == 'C') || (origindegree == 'c'))
	{
		//Convert from Celcius to Fahrenheit
		finaltemp = (((origintemp*9)/5)+32);
		finaldegree = 'F';

		//Output
		cout << "Converted temperature:" << endl;
		cout << setprecision(4) << finaltemp << " " << finaldegree << endl;
		cout << "**************************************************" << endl;

		//End Program
		return 0;
	}
	else if ((origindegree == 'F') || (origindegree == 'f'));
	{
		//Convert from Fahrenheit to Celcius
		finaltemp = (((origintemp -32)*5)/9);
		finaldegree = 'C';

		//Output
		cout << "Converted temperature:" << endl;
		cout << setprecision(4) << finaltemp << " " << finaldegree << endl;
		cout << "**************************************************" << endl;

		//End Program
		return 0;
	}
}
