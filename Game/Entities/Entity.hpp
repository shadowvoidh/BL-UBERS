#pragma once

struct Vector2 {
    float x, y;
};

struct Entity {
    Vector2 pos;
    Vector2 velocity;
    float radius;
};