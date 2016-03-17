#pragma once

#include <string>

#include "LoopState.h"

class Reader
{
public:
	Reader();
	~Reader();

	// Analyzes user input
	void analyze(std::string r);

	// Receives _LoopState from Loop
	void receive(LoopState* pLoopState);

private:

	// User Input
	std::string _response;

	// Pointer to _LoopState
	LoopState* _pLoopState;

};