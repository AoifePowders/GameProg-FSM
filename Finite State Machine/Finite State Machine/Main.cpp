#include "FSM.h"

int main()
{
	FSM fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			//fsm.jumping();
			//std::this_thread::sleep_for(std::chrono::microseconds dura(1000));
			//i = 1;
		}
		else
		{
			//fsm.hammering();
			//std::this_thread::sleep_for(std::chrono::milliseconds dura(1000));
			//i = 0;
		}
	}
	system("Pause");
}