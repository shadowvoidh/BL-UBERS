void Game::Update(float dt) {
    UpdateInput(dt);
    UpdateAI(dt);
    UpdatePhysics(dt);
    UpdateMatch(dt);
    input.Update();
    ai.Update();
    physics.Update();
    match.Update();
}
