#include <iostream>
#include <vector>
#include <tuple>

using std::string;
using std::vector;

void RockPaperScissorsGame()
{
	string choices[] = {"rock", "paper", "scissors"};

	string choicesComputerResponses[3][3] = {
			{"paper", "scissors", "rock"}, // rock
			{"scissors", "rock", "paper"}, // paper
			{"rock", "paper", "scissors"}	 // scissors
	};

	int userChoiceIndex;
	int computerChoiceIndex;
	bool isDone = false;
	char playAgain;

	do
	{
		std::cout << "Choose (1) rock, (2) paper, or (3) scissors." << std::endl;
		std::cin >> userChoiceIndex;

		if (userChoiceIndex < 1 || userChoiceIndex > 3)
		{
			std::cout << "Invalid choice." << std::endl;
		}
		else
		{
			userChoiceIndex--;
			srand(time(NULL));
			computerChoiceIndex = rand() % 3;

			std::cout
					<< "You chose "
					<< choices[userChoiceIndex]
					<< " and the computer chose "
					<< choicesComputerResponses[userChoiceIndex][computerChoiceIndex] << std::endl;

			switch (computerChoiceIndex)
			{
			case 0:
				std::cout << "You loose" << std::endl;
				break;
			case 1:
				std::cout << "You win" << std::endl;
				break;
			case 2:
				std::cout << "You tie" << std::endl;
				break;
			}

			std::cout << "Do you want to play again? (y/n)" << std::endl;
			std::cin >> playAgain;

			if (playAgain == 'n')
			{
				isDone = true;
			}
		}
	} while (!isDone);
}