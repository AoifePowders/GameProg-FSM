#include "Hammering.h"



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
	a->setCurrent(new Idle());
	//deletes when finised using
	delete this;
}
