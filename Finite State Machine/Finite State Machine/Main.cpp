#include "FSM.h"

int main()
{
	FSM fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.jumping();
			/*std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;*/
			i = 1;
			system("Pause");
		}
		else
		{
			fsm.hammering();
			/*std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;*/
			i = 0;
			system("Pause");
		}
	}
	system("Pause");
}