#pragma once

#include <string>

#include "LoopState.h"
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
	LoopState _loopState;
	std::string _response;
	Reader _reader;

};

