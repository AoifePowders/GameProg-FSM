#include "Jumping.h"



Jumping::Jumping()
{
}


Jumping::~Jumping()
{
}

void Jumping::idle(FSM * a)
{
	std::cout << "jumping to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
