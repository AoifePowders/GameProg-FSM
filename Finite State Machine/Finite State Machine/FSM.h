#pragma once
#include <iostream>
#include <chrono>
#include <thread>

class FSM
{
	class State* current;

public:
	FSM();
	void setCurrent(State* s)
	{current = s;}

	void idle();
	void shoveling();
	void hammering();
	void swordManship();
	void walking();
	void jumping();
};











