#include "Ship.hpp"

Ship::Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity)
    {}

Ship::Ship(const std::string& name, size_t capacity, size_t maxCrew)
    : name_(name), capacity_(capacity), maxCrew_(maxCrew)
    {}

Ship::Ship(const std::string& name, size_t capacity)
    : Ship(name, capacity, 0)
    {}

Ship::~Ship() {}