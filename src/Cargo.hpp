#pragma once

#include <string>

class Cargo {
public:
    Cargo& operator+=(const size_t addAmount);
    Cargo& operator-=(const size_t subAmount);
private:
    std::string name_;
    size_t amount_;
    double basePrice_;
};