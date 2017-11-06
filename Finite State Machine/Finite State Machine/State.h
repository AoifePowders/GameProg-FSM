#pragma once
#include "FSM.h"
#include <iostream>

class FSM;
class State
{
public:
	virtual void idle(FSM* a)
	{
		std::cout << "State Ideling" << std::endl;
	}

	virtual void shoveling(FSM* a)
	{
		std::cout << "State shoveling" << std::endl;
	}

	virtual void hammering(FSM* a)
	{
		std::cout << "State hammering" << std::endl;
	}

	virtual void swordManship(FSM* a)
	{
		std::cout << "State swordManship" << std::endl;
	}

	virtual void walking(FSM* a)
	{
		std::cout << "State walking" << std::endl;
	}

	virtual void jumping(FSM* a)
	{
		std::cout << "State jumping" << std::endl;
	}
};
