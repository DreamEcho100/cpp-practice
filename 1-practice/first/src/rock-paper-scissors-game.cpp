#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void RockPaperScissorsGame()
{
	string choices[] = {"rock", "paper", "scissors"};

	cout << "Rock, Paper, Scissors Game" << endl;
	cout << "--------------------------" << endl;
	cout << "Rules:" << endl;
	cout << "Rock beats scissors" << endl;
	cout << "Scissors beats paper" << endl;
	cout << "Paper beats rock" << endl;
	cout << "--------------------------" << endl;

	// The following gave the right size of the array.
	cout << "Choices sizes: " << sizeof(choices) / sizeof(string) << endl;
	cout << "Choices sizes: " << sizeof(choices) / sizeof(choices[0]) << endl;
	// cout << "Choices sizes: " << choices->length() << endl;

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
		cout << "Choose (1) rock, (2) paper, or (3) scissors." << endl;
		cin >> userChoiceIndex;

		if (userChoiceIndex < 1 || userChoiceIndex > 3)
		{
			cout << "Invalid choice." << endl;
		}
		else
		{
			userChoiceIndex--;
			srand(time(NULL));
			computerChoiceIndex = rand() % 3;

			cout
					<< "You chose "
					<< choices[userChoiceIndex]
					<< " and the computer chose "
					<< choicesComputerResponses[userChoiceIndex][computerChoiceIndex] << endl;

			switch (computerChoiceIndex)
			{
			case 0:
				cout << "You loose" << endl;
				break;
			case 1:
				cout << "You win" << endl;
				break;
			case 2:
				cout << "You tie" << endl;
				break;
			}

			cout << "Do you want to play again? (y/n)" << endl;
			cin >> playAgain;

			if (playAgain == 'n')
			{
				isDone = true;
			}
		}
	} while (!isDone);
}