#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << static_cast<void *>(&string) << std::endl;
	std::cout << static_cast<void *>(stringPTR) << std::endl;
	std::cout << static_cast<void *>(&stringREF) << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
