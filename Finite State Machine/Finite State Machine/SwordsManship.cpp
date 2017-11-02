#include "SwordsManship.h"



SwordsManship::SwordsManship()
{
}


SwordsManship::~SwordsManship()
{
}

void SwordsManship::idle(FSM * a)
{
	std::cout << "Sword to idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
