#include "Ship.hpp"

Ship::Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
    {}

Ship::~Ship() {}

Ship& Ship::operator+=(const int newCrew) {
    if (crew_ += newCrew < maxCrew_) {
        crew_ += newCrew;
    }
    return *this;
}

Ship& Ship::operator-=(const int newCrew) {
    if (crew_ -= newCrew < 0) {
        crew_ -= newCrew;
    }
    return *this;
}

size_t Ship::getId() {
    return id_;
}

std::string Ship::getName() {
    return name_;
}

size_t Ship::getSpeed() {
    return speed_;
}

void Ship::setSpeed(size_t newSpeed) {
    speed_ = newSpeed;
}

size_t Ship::getCrew() {
    return maxCrew_;
}

size_t Ship::getCapacity() {
    return capacity_;
}