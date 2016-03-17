#pragma once
class D20
{
public:

	// Constructors not in use
	D20();
	~D20();

	// Returns _currentNumber
	int getValue();

	// Rolls the die
	int roll();

private:

	// Stores the number on the die
	int _currentNumber;

};

