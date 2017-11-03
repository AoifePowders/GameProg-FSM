
/// @author Aoife Powders


#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "Game.h"
#include "FSM.h"
#include <ctime>

int main()
{
	Game game;
	game.run();

	srand(time(NULL));
	FSM fsm;
	
	while (true)
	{
		if (game.i == 0)
		{
			fsm.jumping();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = 5;
			 system("Pause");
		}
		if (game.i == 1)
		{
			fsm.hammering();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = 5;
			system("Pause");
		}
		if (game.i == 2)
		{
			fsm.walking();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = 5;
			system("Pause");
		}
		if (game.i == 3)
		{
			fsm.shoveling();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = 5;
			system("Pause");
		}
		if (game.i == 4)
		{
			fsm.swordManship();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = 5;
			system("Pause");
		}
		if (game.i == 5)
		{
		
			fsm.idle();
			std::chrono::microseconds dura(1000);
			auto start = std::chrono::system_clock::now();
			std::this_thread::sleep_for(dura);
			auto end = std::chrono::system_clock::now();
			auto elapsed = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
			std::cout << elapsed.count() << std::endl;
			game.i = rand() % 5;
			system("Pause");
		}
	}
	
	system("Pause");
}