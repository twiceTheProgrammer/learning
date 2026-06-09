#include <iostream>
#include <string>
#include "calculator.hpp"

using namespace std;

double Add(double a, double b) { return a + b; }
double Subtract(double a, double b) { return a - b; }
double Divide(double a, double b) {  return b == 0 ? NAN : a / b; }
double Multiply(double a, double b) { return a * b; }

int main()
{
	int input;
	double a, b;

	do {
		// tell user to enter 2 numbers
		cout << "\nEnter two numbers: ";
		cin >> a >> b;

		// display menu
		cout << "========= CALCULATOR ===========" << endl;
		cout << "1. Add\n2. Subtract\n3. Divide\n4. Multiply\n5. Exit\n" << endl;
		cin >> input;

		switch(input) {
			case 1 : cout << a << "+" << b << " = " << Add(a, b) << endl; break;
			case 2 : cout << a << "-" << b << " = " << Subtract(a, b) << endl; break;
			case 3 : cout <<  a << "/" << b << " = " << (b == 0 ? "Undefined" :  to_string(Divide(a, b)))  << endl; break;
			case 4 : cout <<  a << "x" << b << " = " << Multiply(a, b)  << endl; break;
			case 5 : cout << "Exit..." << endl; break;
			default : {
				cout << "Invalid input!" << endl;
			}
		}
	} while (input != 5);
	cout << "\nGoodbye..." << endl;
	return 0;
}