enum GameState
{
    KICKOFF_UBERS,
    KICKOFF_BASTARD,
    PLAYING
};

class Match
{
public:

    Ball ball;

    Team ubers;
    Team bastard;

    int score[2];

    float goalFlash;

    int goalTeam;

    GameState state;

    void reset();

    void update(float dt);

    void render(sf::RenderWindow& window);
};