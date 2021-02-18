#include "Ship.hpp"

Ship::Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
    {}

Ship::Ship(const std::string& name, size_t capacity, size_t maxCrew)
    //: Ship(0, name, 0, maxCrew, capacity)
    : name_(name), capacity_(capacity), maxCrew_(maxCrew)
    {}

Ship::Ship(const std::string& name, size_t capacity)
    : Ship(name, capacity, 0)
    {}

Ship::~Ship() {}

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