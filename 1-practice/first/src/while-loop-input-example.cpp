#include <iostream>
#include <string>

void whileLoopInputExample()
{
	std::string str = "lol";
	int strLength = str.length();

	std::cout << "strLength: " << strLength << std::endl;

	int i;

	while (true)
	{
		std::cout << "Enter a number (between 0 and " << strLength - 1 << "):" << std::endl;

		// 'std::cin' is used to read from the input stream.
		// '>>' is used to extract the value from the input stream.
		// And what is an input stream?
		// An input stream is a sequence of characters that can be read from a file, console, etc.
		// for example, 'std::cin >> i;' is used to read a number from the console and store it in the variable 'i'.
		std::cin >> i;

		std::cout << "i: " << i << std::endl;
		if (i >= 0 && i < strLength)
		{
			break;
		}
		else
		{
			std::cout << "Invalid number. Try again." << std::endl;
		}
	}

	char character = str[i];
	short shorty = character;
	std::cout
			<< "str: " << str << "\n"
			<< "character: " << character << "\n"
			<< "shorty: " << shorty << std::endl;
}