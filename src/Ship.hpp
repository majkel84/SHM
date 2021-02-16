#pragma once

#include <string>

class Ship {
public:
    Ship(const std::string& name, size_t capacity);
    ~Ship();

private:
    std::string name_;
    const size_t capacity_;
};