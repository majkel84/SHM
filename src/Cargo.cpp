#include "Cargo.hpp"

Cargo& Cargo::operator+=(const size_t addAmount) {
    amount_ += addAmount;
    return *this;
}

Cargo& Cargo::operator-=(const size_t subAmount) {
    if (amount_ >= subAmount) {
        amount_ -= subAmount;
    }
    return *this;
}