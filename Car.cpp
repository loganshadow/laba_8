//
// Created by mikh- on 06.05.2019.
//

#include <iostream>
#include "Car.h"
void Car::set_brand() {
    std::cout << "Enter car brand" << std::endl;
    std::cin >> brand;
}
void Car::get_brand() {
    std::cout << "Car brand: " << brand << std::endl;
}