// author Aoife Powders
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	void run();
	int i = 5;
private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	void setupSprite();

	sf::RenderWindow m_window; // main SFML window
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

};

#endif // !GAME
