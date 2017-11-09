#pragma once
/// @author Aoife Powders
#include <iostream>
#include <chrono>
#include <thread>

#include "Idle.h"

//calls class state
class State;
class FSM
{
	
	class State* current;

public:
	FSM();
	//sets the current state
	void setCurrent(State* s)
	{current = s;}

	//makes functions
	void idle();
	void shoveling();
	void hammering();
	void swordManship();
	void walking();
	void jumping();
};











