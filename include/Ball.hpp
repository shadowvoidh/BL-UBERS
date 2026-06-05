struct Ball
{
    float x;
    float y;

    float vx;
    float vy;

    float z;
    float vz;
};

void drawBall(
    sf::RenderWindow& win,
    const Ball& ball
);