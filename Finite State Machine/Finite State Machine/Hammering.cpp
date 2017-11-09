#include "Hammering.h"
/// @author Aoife Powders


Hammering::Hammering()
{
}


Hammering::~Hammering()
{
}

//creates a new hammering obj
void Hammering::idle(FSM * a)
{
	std::cout << "Hammering to idle" << std::endl;
	//sets the state to the current state
	a->setCurrent(new Idle());
	//deletes when finised using
	delete this;
}
