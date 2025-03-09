#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	while (1)
	{
		// Clears terminal
		printf("\e[1;1H\e[2J");
		std::cout << "Rock - Paper - Scissors" << std::endl;
		char userChoice;
		std::cout << "Please, choose an option\n[1] Rock\n[2] Paper\n[3] Scissors\n[4] Exit\n> ";
		std::cin >> userChoice;

		int intChoice = (userChoice - '0') - 1;

		srand(time(NULL));
		int r = rand() % 2;

		// Rock = 0
		// Paper = 1
		// Scissors = 2


		// REALLY BAD WAY TO DO THIS BUT I'M NOT MINDING RIGH NOW
		if (r == 0 && intChoice == 1 || r == 1 && intChoice == 2 || r == 2 && intChoice == 0)
		{
			printf("You win!\n");
		}

		else if (r == 0 && intChoice == 2 || r == 1 && intChoice == 0 || r == 2 && intChoice == 1)
		{
			printf("You lost!\n");
		}

		else if (r == intChoice)
		{
			printf("It's a draw!\n");
		}
		
		//std::cout << r;
		std::cout << "Want to try again?\n[Y]es\n[N]o\n> ";
		std::cin >> userChoice;

		if (userChoice == 'N' || userChoice == 'n')
		{
			printf("Goodbye!");
			break;
		}
			
	}

	return 0;
}