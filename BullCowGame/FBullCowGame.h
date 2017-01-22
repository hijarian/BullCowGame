#pragma once
#include <string>

class FBullCowGame
{
public:
	FBullCowGame();
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TODO Make a more rich return value
	bool CheckGuessValidity(std::string); // TODO Make a more rich return value
	// TODO Provide a method for counting bulls & cows, and increasing try number.

private:	
	int MyMaxTries;
	int MyCurrentTry;
};
