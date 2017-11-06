#pragma once
#include <iostream>
#include <chrono>
#include <thread>

#include "Idle.h"

class State;
class FSM
{
	//calls class state
	class State* current;

public:
	FSM();
	//sets the current state
	void setCurrent(State* s)
	{current = s;}

	void idle();
	void shoveling();
	void hammering();
	void swordManship();
	void walking();
	void jumping();
};











