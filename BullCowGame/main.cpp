#include <iostream>
#include <string>


void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

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
	constexpr int GUESSES_NUMBER = 1;

	for (int i = 0; i < GUESSES_NUMBER; ++i)
	{
		std::cout << "Your guess was: " << GetGuess() << std::endl;
	}
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
	std::cout << "Tell your guess: ";

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
