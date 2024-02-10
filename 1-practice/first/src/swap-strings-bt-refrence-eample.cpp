#include <iostream>
#include <string>

void swapStringsByReference(std::string &a, std::string &b)
{
	std::string temp = a;
	a = b;
	b = temp;
}

void swapStringsByReferenceExample()
{
	std::string str1 = "Hello";
	std::string str2 = "World";

	std::cout << "Before swapping: " << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;

	swapStringsByReference(str1, str2);

	std::cout << "After swapping: " << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
}
