#pragma once

#include <string>

class Ship {
public:
    Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity);
    ~Ship();
    Ship& operator+=(const int);
    Ship& operator-=(const int);

    size_t getId();
    std::string getName();
    size_t getSpeed();
    void setSpeed(size_t newSpeed);
    size_t getCrew();
    size_t getCapacity();

private:
    const size_t id_;
    std::string name_;
    size_t speed_;
    const size_t maxCrew_;
    size_t crew_;
    const size_t capacity_;
};