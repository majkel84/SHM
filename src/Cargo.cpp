#include "Cargo.hpp"

Cargo::Cargo(std::string name, size_t amount, double price)
    : name_(name), amount_(amount), basePrice_(price)
    {}

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

bool Cargo::operator==(Cargo cargo) {
    return cargo.amount_ == amount_
    && cargo.basePrice_ == basePrice_
    && cargo.name_ == name_;
}

std::string Cargo::getName() {
    return name_;
}

size_t Cargo::getAmount() {
    return amount_;
}

double Cargo::gePrice() {
    return basePrice_;
}