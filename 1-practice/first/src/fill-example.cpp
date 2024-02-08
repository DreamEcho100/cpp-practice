#include <string>
#include <iostream>

void fillExample()
{
	const int size = 9;
	std::string foods[size];

	fill(foods, foods + (size / 3), "pizza");
	fill(foods + (size / 3), foods + (size / 3) * 2, "hamburger");
	fill(foods + (size / 3) * 2, foods + size, "hotdigitydog");

	for (std::string food : foods)
	{
		std::cout << food << std::endl;
	}
}