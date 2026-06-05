#include "Game.hpp"

Game::Game()
: window(
    sf::VideoMode(800, 600),
    "Blue Lock 11x11 Tactical Match",
    sf::Style::Close)
{
    window.setFramerateLimit(60);
}

void Game::Run()
{
    sf::Clock clock;

    while (window.isOpen())
    {
        float dt = clock.restart().asSeconds();

        ProcessEvents();
        Update(dt);
        Render();
    }
}

void Game::ProcessEvents()
{
    sf::Event ev;

    while (window.pollEvent(ev))
    {
        if (ev.type == sf::Event::Closed)
            window.close();
    }
}

void Game::Update(float dt)
{
}

void Game::Render()
{
    window.clear();
    window.display();
}