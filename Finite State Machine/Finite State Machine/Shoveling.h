#pragma once
/// @author Aoife Powders
#include "FSM.h"
#include "State.h"
#include "Idle.h"

class Shoveling : public State
{
public:
	Shoveling();
	~Shoveling();
	void idle(FSM* a);
};
