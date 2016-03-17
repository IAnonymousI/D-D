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
		std::cout << "This program is cap-sensitive.\nexit: Exits the program.\nhelp: List all commands available.\n";
	}

	// Exits the loop
	else if (r == "exit"){
		*_pLoopState = LoopState::EXIT;
	}

	else{
		std::cout << "Unknown Command.\n";
	}

}

void Reader::receive(LoopState* pLoopState){
	_pLoopState = pLoopState;
}