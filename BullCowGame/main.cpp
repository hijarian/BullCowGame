#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame;

int main()
{
	do
	{
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain());

	return 0; // exit game
}

void PlayGame()
{
	BCGame.Reset();
	const int MaxTries = BCGame.GetMaxTries();

	// Loop for the number of turns asking for guesses
	// TODO Change from `for` to `while` loop one we are validating tries
	for (int i = 0; i < MaxTries; ++i)
	{
		// TODO Make loop checking valid

		// Submit valid guess to the game
		// Print number of bulls and cows
		std::cout << "Your guess was: " << GetGuess() << std::endl;
	}

	// TODO summarize game
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

std::string GetGuess()
{
	std::cout << "Try " << BCGame.GetCurrentTry() << ". Tell your guess: ";

	std::string Guess = "";
	std::getline(std::cin, Guess);

	return Guess;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	// introduce the game
	std::cout << "Welcome to Bulls and Cows" << std::endl;
	std::cout << "World length is " << WORD_LENGTH << " characters and it must be an isogram." << std::endl;
}
