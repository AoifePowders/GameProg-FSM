#pragma once
#include "FSM.h"
#include "State.h"
#include "Idle.h"

class SwordsManship : public State
{
public:
	SwordsManship();
	~SwordsManship();
	void idle(FSM* a);
};
