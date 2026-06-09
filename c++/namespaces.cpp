#include <iostream>

namespace Cat {
	void name()
	{
		std::cout << "I'm a cat!" << std::endl;
	}
}

namespace Person 
{
	void name()
	{
		std::cout << "I'm a Person!" << std::endl;
	}
}

int main()
{
	Cat::name();
	Person::name();
	
	return 0;
}

