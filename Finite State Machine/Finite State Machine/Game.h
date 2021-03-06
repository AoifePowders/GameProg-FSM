// author Aoife Powders
#ifndef GAME
#define GAME

#include "FSM.h"
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	void run();
	FSM fsm;
	State state;
private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	
	//sets up sprite
	void setupSprite();

	//timers for all the states
	int timerJump;
	int timerHammer;
	int timerSword;
	int timerShovel;
	int timerWalking;
	
	sf::RenderWindow m_window; // main SFML window
	sf::Texture m_texture; // texture
	sf::Sprite m_sprite; // sprite
	bool m_exitGame; // control exiting game

};

#endif // !GAME
