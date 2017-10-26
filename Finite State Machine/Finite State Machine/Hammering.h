#pragma once
#include "FSM.h"
class Hammering : public State
{
public:
	Hammering();
	~Hammering();
	void idle(FSM* a);
};

