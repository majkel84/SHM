#pragma once

#include <cstddef>

class Coordinates {
public:
    Coordinates(size_t x, size_t y);
private:
    size_t posX_;
    size_t posY_;
};