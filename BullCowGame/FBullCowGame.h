#pragma once
#include <string>

class FBullCowGame
{
public:
	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();
	bool CheckGuessValidity(std::string);

private:	
	int MyMaxTries = 5;
	int MyCurrentTry = 1;
};
