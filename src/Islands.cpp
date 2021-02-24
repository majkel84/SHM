#include "Islands.hpp"

Coordinates::Coordinates(size_t x, size_t y)
    :posX_(x), posY_(y)
    {}

bool Coordinates::operator==(const Coordinates& coordinates) {
    return posX_ == coordinates.posX_
        && posY_ == coordinates.posY_;
}