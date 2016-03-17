#include <random>

#include "D20.h"

D20::D20(){}
D20::~D20(){}

int D20::getValue(){
	return _currentNumber;
}

int D20::roll(){
	_currentNumber = (rand() % 20) + 1;
	return _currentNumber;
}