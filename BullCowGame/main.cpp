#include <iostream>
#include <string>

using namespace std;


void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

int main()
{
	PrintIntro();
	PlayGame();
	cout << AskToPlayAgain() << endl;
	return 0; // exit game
}

void PlayGame()
{
	constexpr int GUESSES_NUMBER = 1;

	for (int i = 0; i < GUESSES_NUMBER; ++i)
	{
		cout << "Your guess was: " << GetGuess() << endl;
	}
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? ";
	string Response = "";
	getline(cin, Response);
	
	return (Response[0] == 'y') || (Response[0] == 'Y');
}

string GetGuess()
{
	cout << "Tell your guess: ";

	string Guess = "";
	getline(cin, Guess);

	return Guess;
}

void PrintIntro()
{
	constexpr int WORD_LENGTH = 9;
	// introduce the game
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "World length is " << WORD_LENGTH << " characters and it must be an isogram." << endl;
}
