extern const float W;
extern const float H;

extern const sf::Vector2f TOP_L;
extern const sf::Vector2f TOP_R;
extern const sf::Vector2f BOT_L;
extern const sf::Vector2f BOT_R;

float lerpF(float a,float b,float t);

float fieldT(float y);
float fieldLeft(float y);
float fieldRight(float y);

float scale3D(float y);

void clampToField(float& x,float& y,float margin=0.f);

sf::Vector2f getFieldPos(float fx,float fy);

void drawField(sf::RenderWindow& win);