#include <iostream>

using namespace std;

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
		
		switch(input) {
			case 1 : cout << "Add..." << endl; break;
			case 2 : cout << "Subtract..." << endl; break;
			case 3 : cout << "Divide..." << endl; break;
			case 4 : cout << "Multiply..." << endl; break;
			case 5 : cout << "Exit..." << endl; break;
			default : {
				cout << "Invalid input!" << endl;
			}
		}
	} while (input != 5);
	cout << "\nGoodbye..." << endl;
	return 0;
}