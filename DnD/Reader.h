#pragma once

#include <string>

#include "GameState.h"

class Reader
{
public:
	Reader();
	~Reader();

	// Analyzes user input
	void analyze(std::string r);

	// Receives _gameState from Loop
	void receive(GameState* pGameState);

private:

	// User Input
	std::string _response;

	// Pointer to _gameState
	GameState* _pGameState;

};