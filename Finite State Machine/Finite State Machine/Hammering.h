#pragma once
#include "FSM.h"
#include "State.h"
#include "Idle.h"

class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(FSM* a);
};

