#include "Walking.h"


Walking::Walking()
{
}


Walking::~Walking()
{
}

void Walking::idle(FSM * a)
{
	std::cout << "Walking to Ideling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
