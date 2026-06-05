#include "Match.hpp"


int main()
{
    sf::RenderWindow window(
        sf::VideoMode(800,600),
        "BLUbers"
    );

    Match match;

    sf::Clock clock;

    while(window.isOpen())
    {
        float dt =
            clock.restart().asSeconds();

        match.update(dt);

        window.clear();

        match.render(window);

        window.display();
    }
    
    return 0;
}
