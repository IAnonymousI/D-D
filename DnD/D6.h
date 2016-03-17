#pragma once
class D6
{

public:
	D6();
	~D6();

	// Returns _currentNumber
	int getValue();

	// Rolls the die
	int roll();

private:

	// Stores the number on the die
	int _currentNumber;

};

