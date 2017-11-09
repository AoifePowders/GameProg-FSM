#pragma once
/// @author Aoife Powders
#include "FSM.h"
#include "State.h"
#include "Idle.h"

//makes a class that is a public state
class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(FSM* a);
};

