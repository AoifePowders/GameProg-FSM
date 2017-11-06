// author Peter Lowe

#include "Game.h"
#include <iostream>
#include "FSM.h"

Game::Game() :
	m_window{ sf::VideoMode{ 800, 600, 32 }, "SFML Game" },
	m_exitGame{ false } //when true game will exit
{
	setupSprite(); // load texture


}


Game::~Game()
{
}


void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f); // 60 fps
	while (m_window.isOpen())
	{
		processEvents(); // as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents(); // at least 60 fps
			update(timePerFrame); //60 fps
		}
		render(); // as many as possible
	}
}

/// handle user and system events/ input
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (sf::Event::Closed == event.type) // window message
		{
			m_window.close();
		}
		if (sf::Event::KeyPressed == event.type) //user key press
		{
			if (sf::Keyboard::Escape == event.key.code)
			{
				m_exitGame = true;
			}
		}

		//if key is pressed set the sprite and the timer and call the function
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			timerJump = 0;
			fsm.jumping();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\jump.png"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(200.0f, 80.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			fsm.walking();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\walking.png"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(350.0f, 180.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{
			fsm.hammering();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Hammering.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(200.0f, 80.0f);
			m_sprite.setScale(0.5, 0.5);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			fsm.swordManship();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Sword.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(300.0f, 180.0f);
			m_sprite.setScale(0.3, 0.3);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
		{
			fsm.shoveling();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Shovel.png"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(300.0f, 180.0f);
			m_sprite.setTexture(m_texture);
		}
	}
}

/// Update the game world
void Game::update(sf::Time t_deltaTime)
{
	if (m_exitGame)
	{
		m_window.close();
	}
	timerJump++;
	if (timerJump == 120)
	{
		fsm.idle();
		setupSprite();
	}
}

/// draw the frame and then switch bufers
void Game::render()
{
	m_window.clear(sf::Color::White);
	m_window.draw(m_sprite);
	m_window.display();
}



/// load the texture and setup the sprite for the logo
void Game::setupSprite()
{
	if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Standing.jpg"))
	{
		std::cout << "problem loading logo" << std::endl;
	}
	m_sprite.setPosition(100.0f, 80.0f);
	m_sprite.setTexture(m_texture);
}
