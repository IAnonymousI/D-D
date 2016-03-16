#include <iostream>

#include "Loop.h"

// Initiation
Loop::Loop()
{
	_gameState = GameState::PLAY;
}

Loop::~Loop()
{
}

void Loop::run(){

	// Instructions
	std::cout << "D&D Program\n";

	// Console Loop
	while (_gameState == GameState::PLAY){

		// TEST /////////////////////
		_gameState = GameState::EXIT;
		/////////////////////////////

	}

	return;

}