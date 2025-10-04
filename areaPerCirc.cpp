// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : September 28, 2025
// This program calculates the circumference of a circle
// with a user input using TAU

#include <cmath>  // for M_PI and pow
#include <iostream>

int main() {
    // declare variables
    float radius, area, circumference;
    // ask user for radius
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // calculate area and circumference
    // Area =πr²
    area = M_PI * pow(radius, 2);
    // circumference = 2πr
    circumference = 2 * M_PI * radius;

    // display results
    std::cout << "Area of the circle = " << area << std::endl;
    std::cout << "Circumference = " << circumference << std::endl;
}
