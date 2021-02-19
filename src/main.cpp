#include <iostream>

#include "Ship.hpp"

int main() {
    std::cout << "Hello world";
    std::string shipName = "some ship";
    Ship ship(1, shipName, 50, 50, 100);
    return 0;
}