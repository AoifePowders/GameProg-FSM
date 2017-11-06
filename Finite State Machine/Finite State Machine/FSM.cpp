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



