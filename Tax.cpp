// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paterry Baptichon Junior
// Created on: 2022-03-27
// This program calculates total from subtotal and tax

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates total from subtotal and tax
    const float NBHST = 0.15;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = + subTotal * NBHST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << tax << ", and the total cost is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total << "." << std::endl;
}
