// PonterDemo.cpp 
// Lance Zotigh (lzotigh@cnm.edu)
// Demo on pointers

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	//double number1;
	//number1 = 6;
	//cout << "number1" << endl;
	//cout << "address of Number1: " << &number1 << endl;
	//
	//double* ptrNum;
	//ptrNum = &number1;
	//cout << "ptrNum: " << ptrNum << endl;
	////cout << "ptrNum: " << &ptrNum << endl; This is the same as the top
	//cout << "ptrNum: " << *ptrNum << endl;
	double number1 = 4;
	double number2 = 6;
	double summation = 0;
	double subtraction = 0;

	math(number1, number2, &summation, &subtraction);

	cout << "Summation: " << summation << endl;
	cout << "Subtraction: " << subtraction << endl;

	return 0;
}


