// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program finds squares up to the specified number

#include <iostream>
#include <cmath>

int main() {
    // This function finds squares up to the specified number

    // Variables
    int counter;
    int positiveInteger;
    int square;

    // Input
    std::cout << "Enter a number here (positive integer):" << std::endl;
    std::cin >> positiveInteger;
    std::cout << "" << std::endl;

    // Process
    for (counter = 0; counter < positiveInteger + 1; counter++) {
        square = pow(counter, 2);
        std::cout << counter << "² = " << square << std::endl;
    }
}
