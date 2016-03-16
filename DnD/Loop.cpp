#include <iostream>

#include "Loop.h"
#include "Reader.h"

// Initiation
Loop::Loop()
{
	_gameState = GameState::PLAY;
	_reader.receive(&_gameState);
}

Loop::~Loop()
{
}

void Loop::run(){

	// Instructions
	std::cout << "D&D Program\n";

	// Console Loop
	while (_gameState == GameState::PLAY){

		// User input
		std::cout << "> ";
		std::cin >> _response;

		// Analyzes user input
		_reader.analyze(_response);

	}

	return;

}