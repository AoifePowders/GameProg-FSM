#pragma once
#include "FSM.h"
#include "State.h"
#include "Idle.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(FSM* a);
};
