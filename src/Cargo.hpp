#pragma once

#include <string>

class Cargo {
public:
    Cargo(std::string name, size_t amount, double price);

    Cargo& operator+=(const size_t addAmount);
    Cargo& operator-=(const size_t subAmount);
    bool operator==(Cargo cargo);

    std::string getName();
    size_t getAmount();
    double gePrice();
private:
    std::string name_;
    size_t amount_;
    double basePrice_;
};