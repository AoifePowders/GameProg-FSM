#pragma once
#include "FSM.h"
#include "State.h"

class Idle : public State
{
public:
	Idle();
	~Idle();
	void hammering(FSM* a);
	void shoveling(FSM* a);
	void swordManship(FSM* a);
	void walking(FSM* a);
	void jumping(FSM* a);
};