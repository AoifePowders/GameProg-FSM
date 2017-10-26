#pragma once
#include "FSM.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();
	void idle(FSM* a);
};
