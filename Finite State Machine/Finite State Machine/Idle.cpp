#include "Idle.h"



Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::hammering(FSM * a)
{
	std::cout << "Hammering" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::shoveling(FSM * a)
{
	std::cout << "Shoveling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::swordManship(FSM * a)
{
	std::cout << "Sword" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(FSM * a)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::jumping(FSM * a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}