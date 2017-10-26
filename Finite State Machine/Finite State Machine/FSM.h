#pragma once
#include <iostream>
#include <chrono>
#include <thread>

class FSM
{
	class State* current;

public:
	FSM();
	void setCurrent(State* s)
	{current = s;}

	void idle();
	void shoveling();
	void hammering();
	void swordManship();
	void walking();
	void jumping();
};

class State
{
public:
	virtual void idle(FSM* a)
	{std::cout << "State Ideling" << std::endl;}

	virtual void shoveling(FSM* a)
	{std::cout << "State shoveling" << std::endl;}

	virtual void hammering(FSM* a)
	{std::cout << "State hammering" << std::endl;}

	virtual void swordManship(FSM* a)
	{std::cout << "State swordManship" << std::endl;}

	virtual void walking(FSM* a)
	{std::cout << "State walking" << std::endl;}

	virtual void jumping(FSM* a)
	{std::cout << "State jumping" << std::endl;}
};

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







