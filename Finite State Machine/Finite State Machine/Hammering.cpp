#include "Hammering.h"



Hammering::Hammering()
{
}


Hammering::~Hammering()
{
}

void Hammering::idle(FSM * a)
{
	std::cout << "Hammering to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
