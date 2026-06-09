#include <iostream>

using namespace std;

double Add(double a, double b);
double Subtract(double a, double b);
double Divide(double a, double b);
double Multiply(double a, double b);

int main()
{
	int input;
	cout << "========= CALCULATOR ===========" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Divide" << endl;
	cout << "4. Multiply" << endl;
	cout << "5. Exit" << endl;

	do {

		cout << "\nChoose your Arithmatic Operation : " << endl;
		cin >> input;
		int a; 
		int b;

		cout << "First Number : " << endl;
		cin >> a;

		cout << "Second Number : " << endl;
		cin >> b;

		switch(input) {
			case 1 : cout << a << "+" << b << " = " << Add(a, b) << endl; break;
			case 2 : cout << a << "-" << b << " = " << Subtract(a, b) << endl; break;
			case 3 : cout <<  a << "/" << b << " = " << Divide(a, b)  << endl; break;
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

double Add(double a, double b) { return a + b; }
double Subtract(double a, double b) { return a - b; }
double Divide(double a, double b) { 
	if (!b) {
		return a / b;
	}
	return 0;
}

double Multiply(double a, double b) { return a * b; }