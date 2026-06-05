#pragma once

#include <SFML/Graphics.hpp>
#include "Entities/Entity.hpp"

enum GameState
{
    KICKOFF_UBERS,
    KICKOFF_BASTARD,
    PLAYING
};

class Game
{
public:
    Game();

    void Run();

private:

    void ProcessEvents();
    void Update(float dt);
    void Render();

    void BuildTeams(GameState state);

    sf::RenderWindow window;

    //Ball ball;

    int score[2] = {0, 0};

    float goalFlash = 0.f;

    float animT = 0.f;

    GameState gameState = KICKOFF_UBERS;
};