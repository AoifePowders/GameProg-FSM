#include "Shoveling.h"



Shoveling::Shoveling()
{
}


Shoveling::~Shoveling()
{
}

void Shoveling::idle(FSM * a)
{
	std::cout << "Shoveling to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
