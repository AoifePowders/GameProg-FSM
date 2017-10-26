#pragma once
#include "FSM.h"

class Walking : public State
{
public:
	Walking();
	~Walking();
	void idle(FSM* a);
};
