#include <iostream>

#include "Reader.h"

Reader::Reader()
{
	_response = "";
}

Reader::~Reader()
{
}

void Reader::analyze(std::string r){

	// List all commands
	if (r == "help"){
		std::cout << "Info goes here\nInfo goes here\nInfo goes here\n";
	}

	// Exits the loop
	else if (r == "exit"){
		*_pGameState = GameState::EXIT;
	}

	else{
		std::cout << "Unknown Command.\n";
	}

}

void Reader::receive(GameState* pGameState){
	_pGameState = pGameState;
}