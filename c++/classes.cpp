#include <iostream>

using namespace std;

class Employee 
{
	public:
		string name;
		string surname;
		string title;

	void display()
	{
		cout << "Name : " << name << endl;
		cout << "Surname : " << surname << endl;
		cout << "Title : " << title << endl;
	}
};

int main()
{
	Employee employee;

	employee.name = "Njabulo";
	employee.surname = "Magagula";
	employee.title = "Software Engineer";

	// Display employee information
	employee.display();
	return 0;
}