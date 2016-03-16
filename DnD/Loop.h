#pragma once

#include <string>

#include "GameState.h"
#include "Reader.h"

class Loop
{
public:

	// Constructors
	Loop();
	~Loop();

	// Executes the loop
	void run();

private:

	// Variables
	GameState _gameState;
	std::string _response;
	Reader _reader;

};

