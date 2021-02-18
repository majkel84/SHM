#pragma once

#include <string>

class Ship {
public:
    Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity);
    ~Ship();

    size_t getId();
    std::string getName();
    size_t getSpeed();
    void setSpeed(size_t newSpeed);
    size_t getCrew();
    size_t getCapacity();

private:
    size_t id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    size_t capacity_;
};