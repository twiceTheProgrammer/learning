#include <iostream>

using namespace std;

int main()
{
	auto greet = []{
		cout << "Hello from lambda function" << endl;
	};

	greet();
	return 0;
}