/*
FILE: Source.cpp
DATE: 10/02/2017
AUTHOR: RPMMA
PURPOSE: 
To study data types sizes and min. and max. values
*/

#include <iostream>
#include <climits>

using namespace std;
int main() {  
	system("color 0E");

	//char
	cout << "  *** CHARS ***  " << endl << endl;
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Char min value : " << CHAR_MIN << endl;
	cout << "Char max value : " << CHAR_MAX << endl;
	cout << "Unsigned Char max value : " << UCHAR_MAX << endl << endl;
	cout << "------------------------------------------------------" << endl << endl;
	

	//ints
	cout << "  *** INTS ***  " << endl << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Int min value : " << INT_MIN << endl;
	cout << "Int max value : " << INT_MAX << endl;
	cout << "Unsigned int max value : " << UINT_MAX << endl << endl;

	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Short int min value : " << SHRT_MIN << endl;
	cout << "Short int max value : " << SHRT_MAX << endl;
	cout << "Unsiged short int max value : " << USHRT_MAX << endl << endl;

	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Long int min value : " << LONG_MIN << endl;
	cout << "Long int max value : " << LONG_MAX << endl;
	cout << "Unsigned long int max value : " << ULONG_MAX << endl << endl;

	cout << "Size of long long int : " << sizeof(long long int) << endl;
	cout << "Long long int min value : " << LLONG_MIN << endl;
	cout << "Long long int max value : " << LLONG_MAX << endl;
	cout << "Unsigned long long int max value : " << ULLONG_MAX << endl << endl;
	cout << "------------------------------------------------------" << endl << endl;


	//floats
	cout << "  *** FLOATS & DOUBLES ***  " << endl << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Float min integer part value : " << FLT_MIN << endl;
	cout << "Float max integer part value : " << FLT_MAX << endl;
	cout << "Float decimal part precision : " << FLT_DIG << endl << endl;

	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Double min integer part value : " << DBL_MIN << endl;
	cout << "Double max integer part value : " << DBL_MAX << endl;
	cout << "Double decimal part precision : " << DBL_DIG << endl << endl;

	cout << "Size of long double : " << sizeof(long double) << endl; 
	cout << "Long Double min integer part value : " << LDBL_MIN << endl;
	cout << "Long Double max integer part value : " << LDBL_MAX << endl;
	cout << "Long Double decimal part precision : " << LDBL_DIG << endl << endl;

	return 0;
}
