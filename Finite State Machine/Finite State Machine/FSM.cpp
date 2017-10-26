#include "FSM.h"



FSM::FSM()
{current = new Idle();}

void FSM::idle()
{current->idle(this);}

void FSM::hammering()
{current->hammering(this);}

void FSM::shoveling()
{current->shoveling(this);}

void FSM::swordManship()
{current->swordManship(this);}

void FSM::walking()
{current->walking(this);}

void FSM::jumping()
{current->jumping(this);}


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
