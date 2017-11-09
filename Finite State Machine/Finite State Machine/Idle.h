#pragma once
/// @author Aoife Powders
#include "FSM.h"
#include "State.h"
#include "Hammering.h"
#include "Shoveling.h"
#include "SwordsManship.h"
#include "Jumping.h"
#include "Walking.h"

//creates a class of public state
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