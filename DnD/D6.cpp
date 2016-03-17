#include <random>

#include "D6.h"

// Constructors not in use
D6::D6(){}
D6::~D6(){}

int D6::getValue(){
	return _currentNumber;
}

int D6::roll(){
	_currentNumber = (rand() % 6) + 1;
	return _currentNumber;
}