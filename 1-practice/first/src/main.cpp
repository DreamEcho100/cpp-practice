#include <iostream>
#include <string>
#include <.gitignore>

void FancyLog(const char *message);

int main()
{
	std::cout << "Hello, World!" << std::endl;
	FancyLog("Hello, World!");

	std::string str = "lol";
	int strLength = str.length();

	std::cout << "strLength: " << strLength << "\n";

	int i;

	while (true)
	{
		std::cout << "Enter a number (between 0 and " << strLength - 1 << "): \n";
		// i = std::cin.get();
		std::cin >> i;
		std::cout << "i: " << i << "\n";
		if (i >= 0 && i < strLength)
		{
			break;
		}
		else
		{
			std::cout << "Invalid number. Try again.\n";
		}
	}

	char character = str[i];
	short shorty = character;
	std::cout
			<< "str: " << str << "\n"
			<< "character: " << character << "\n"
			<< "shorty: " << shorty << "\n";

	std::cin.get();

	return 0;
}
