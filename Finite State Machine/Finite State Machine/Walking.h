#pragma once
#include "FSM.h"
#include "State.h"
#include "Idle.h"

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(FSM* a);
};
