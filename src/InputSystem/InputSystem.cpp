#include "InputSystem.hpp"

void InputSystem::Update()
{
    bool zNow =
        sf::Keyboard::isKeyPressed(sf::Keyboard::Z);

    shoot = zNow && !zLast;
    zLast = zNow;

    bool xNow =
        sf::Keyboard::isKeyPressed(sf::Keyboard::X);

    pass = xNow && !xLast;
    xLast = xNow;

    bool fNow =
        sf::Keyboard::isKeyPressed(sf::Keyboard::F);

    tackle = fNow && !fLast;
    fLast = fNow;

    bool yNow =
        sf::Keyboard::isKeyPressed(sf::Keyboard::Y);

    sw = yNow && !yLast;
    yLast = yNow;
}