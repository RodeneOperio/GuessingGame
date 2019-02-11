
#include "pch.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	//Initialize variables 
	int maxTries = 5;
	int guess; 
	bool correct = false;
	int playAgain = 1;

	//Guessing Game Header 
	cout << "Welcome to the Guessing Game\n";
	cout << "----------------------------\n";
	
	//Randomize number between 1-100
	srand(time(NULL));
	int num = rand() % 100 + 1;
	//cout << "The number is: " << num << endl;

	//Guessing Game Loop
	while (maxTries != 0 && !correct)
	{
		cout << "You have " << maxTries << " tries to guess the number! Please guess a number 1-100 \n";
		cin >> guess;

		//Too High
		if (guess > num)
		{
			cout << "Too high, try again!\n";
			maxTries--;
		}
		//Too Low
		else if (guess < num)
		{
			cout << "Too low, try again\n";
			maxTries--;
		}
		//Win
		else
		{
			cout << "Congratulation, you have guessed the correct number!\n";
			correct = true;
			maxTries = 5;
			//Play Again?
			cout << "Would you like to play again? Type '1' for yes, '0' for no: \n";
			cin >> playAgain;
		}

		if (maxTries == 0)
		{
			cout << "Game Over, you ran out of tries!\n";
			correct = true;
			maxTries = 5;
			//Play Again?
			cout << "Would you like to play again? Type '1' for yes, '0' for no: \n";
			cin >> playAgain;
		}

		if (playAgain != 0)
		{
			correct = false;
		}
		else
		{
			correct = true;
		}
	}
}
