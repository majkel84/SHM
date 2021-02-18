#pragma once

#include <string>

class Ship {
public:
    Ship(size_t id, std::string& name, size_t speed, size_t maxCrew, size_t capacity);
    Ship(const std::string& name, size_t capacity, size_t maxCrew);
    Ship(const std::string& name, size_t capacity);
    ~Ship();

private:
    size_t id_;
    std::string name_;
    size_t speed_;
    size_t maxCrew_;
    const size_t capacity_;
};