enum Role
{
    GK,
    ZAG,
    LD,
    LE,
    VOL,
    MCC,
    MCD,
    MCE,
    SA,
    ATA
};

struct Entity
{
    float x;
    float y;

    int team;

    Role role;

    bool isPlayer;
    bool hasBall;

    std::string name;

    sf::Vector2f homePos;
};

void drawPlayer(
    sf::RenderWindow& win,
    const Entity& e,
    float animT,
    sf::Font& font,
    bool fontOk
);

void drawShadow(
    sf::RenderWindow& win,
    float x,
    float y,
    float sc
);