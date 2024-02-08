#include <iostream>
#include <ctime>

void numberGuessingGame()
{
	std::cout << "Welcome to the number guessing game!" << std::endl;

	std::srand(std::time(NULL)); // use current time as seed for random generator

	int secretNumber = rand() % 100 + 1;
	int guessedNumber;
	int tries = 0;

	do
	{
		std::cout << "Enter an integer between 1 and 100: ";
		std::cin >> guessedNumber;
		tries++;

		if (guessedNumber > secretNumber)
		{
			std::cout << "Too high!" << std::endl;
		}
		else if (guessedNumber < secretNumber)
		{
			std::cout << "Too low!" << std::endl;
		}
		else
		{
			std::cout << "Congratulations! You guessed the number in " << tries << " Tries!" << std::endl;
			break;
		}

		std::cout << "Try again!" << std::endl;
	} while (secretNumber != guessedNumber);
}