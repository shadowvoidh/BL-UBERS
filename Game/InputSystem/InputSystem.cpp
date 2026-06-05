#include "Input.hpp"

bool Input::keys[256] = { false };

void Input::KeyDown(int key) {
    keys[key] = true;
}

void Input::KeyUp(int key) {
    keys[key] = false;
}

bool Input::IsDown(int key) {
    return keys[key];
}
InputSystem::Update()
InputSystem::IsPressed()
