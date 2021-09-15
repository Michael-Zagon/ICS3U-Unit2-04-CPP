// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program calculates the circumference of a circle with user input

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of pizza
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "What diameter pizza would you like? (inch): ";
    std::cin >> diameter;

    // Process
    sub_total = RENT + LABOUR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // Output
    std::cout << "The final cost is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
