#pragma once
/// @author Aoife Powders
#include "FSM.h"
#include <iostream>

//calls the fsm class
class FSM;
//creates a class state
class State
{
public:
	//creates a virtual function
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
