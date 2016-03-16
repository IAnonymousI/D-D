#pragma once

#include <string>

enum class GameState{
	PLAY, EXIT
};

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

};

