#pragma once
#include "FSM.h"
class SwordsManship : public State
{
public:
	SwordsManship();
	~SwordsManship();
	void idle(FSM* a);
};
