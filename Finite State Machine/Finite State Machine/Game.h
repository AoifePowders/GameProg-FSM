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
	int i = 5;
	FSM fsm;

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupSprite();

	int timerJump;
	
	sf::RenderWindow m_window; // main SFML window
	sf::Texture m_texture; // texture
	sf::Sprite m_sprite; // sprite
	bool m_exitGame; // control exiting game

};

#endif // !GAME
