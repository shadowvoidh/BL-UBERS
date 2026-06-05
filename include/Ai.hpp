class Ai
{
public:

    static void updateUbers(
        std::vector<Entity>& ubers,
        Ball& ball,
        float dt
    );

    static void updateBastard(
        std::vector<Entity>& bastard,
        Ball& ball,
        float dt
    );
};