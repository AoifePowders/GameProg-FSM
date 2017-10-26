#pragma once
#include "FSM.h"
class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();
	void idle(FSM* a);
};
