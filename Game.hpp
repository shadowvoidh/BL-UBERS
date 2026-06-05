#pragma once

#include "Entity.hpp"

class Game {
public:
    void Init();
    void Update(float dt);
    void Reset();

private:
    Entity playerA;
    Entity playerB;
    Entity ball;

    int scoreA;
    int scoreB;
};