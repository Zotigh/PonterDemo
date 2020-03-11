// PonterDemo.cpp 
//

#include <iostream>
using namespace std;

int main()
{
	double number1;
	number1 = 6;
	cout << "number1" << endl;
	cout << "address of Number1" << &number1 << endl;
	
	double* ptrNum;
	ptrNum = &number1;


	return 0;
}


