// author Peter Lowe

#include "Game.h"
#include <iostream>
#include "FSM.h"

Game::Game() :
	m_window{ sf::VideoMode{ 500, 500 }, "SFML Game" },
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
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
		{
			timerJump = 0;
			fsm.jumping();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\jump.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(0.0f, 0.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			timerWalking = 0;
			fsm.walking();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\walking.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(0.0f, 0.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
		{
			timerHammer = 0;
			fsm.hammering();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Hammering.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(0.0f, 0.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
		{
			timerSword = 0;
			fsm.swordManship();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Sword.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(0.0f, 0.0f);
			m_sprite.setTexture(m_texture);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
		{
			timerShovel = 0;
			fsm.shoveling();
			if (!m_texture.loadFromFile("ASSETS\\IMAGES\\Shovel.jpg"))
			{
				std::cout << "problem loading logo" << std::endl;
			}
			m_sprite.setPosition(0.0f, 0.0f);
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
	timerHammer++;
	if (timerHammer == 120)
	{
		fsm.idle();
		setupSprite();
	}
	timerShovel++;
	if (timerShovel == 120)
	{
		fsm.idle();
		setupSprite();
	}
	timerSword++;
	if (timerSword == 120)
	{
		fsm.idle();
		setupSprite();
	}
	timerWalking++;
	if (timerWalking == 120)
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
	if (!m_texture.loadFromFile("ASSETS\\IMAGES\\standing.jpg"))
	{
		std::cout << "problem loading logo" << std::endl;
	}
	m_sprite.setPosition(0.0f, 0.0f);
	m_sprite.setTexture(m_texture);
}
