/** @file main.cpp @brief Runs a demonstration of Calculator. */
#include "calculator.hpp"
#include <iostream>
int main() {
    const Calculator calculator;
    std::cout << "8 + 4 = " << calculator.add(8, 4) << '\n';
    std::cout << "8 / 4 = " << calculator.divide(8, 4) << '\n';
    return 0;
}
