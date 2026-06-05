#pragma once

#include <SFML/Window.hpp>

class InputSystem
{
public:

    void Update();

    bool Left() const;
    bool Right() const;
    bool Up() const;
    bool Down() const;

    bool ShootPressed() const;
    bool PassPressed() const;
    bool TacklePressed() const;
    bool SwitchPressed() const;

private:

    bool zLast = false;
    bool xLast = false;
    bool fLast = false;
    bool yLast = false;

    bool shoot = false;
    bool pass = false;
    bool tackle = false;
    bool sw = false;
};