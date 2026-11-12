/**
 * @file main.cpp
 * @brief Demonstrates Doxygen comments in a small C++ program.
 * @author Your Name
 */

#include <iostream>

/**
 * @brief Adds two integer values.
 * @param first The first number.
 * @param second The second number.
 * @return The sum of the two numbers.
 */
int add(int first, int second) {
    return first + second;
}

/**
 * @brief Calculates the average of two integer values.
 * @param first The first number.
 * @param second The second number.
 * @return The arithmetic mean.
 */
double average(int first, int second) {
    return (first + second) / 2.0;
}

/**
 * @brief Runs the demonstration.
 * @return 0 when the program completes successfully.
 */
int main() {
    std::cout << "Sum: " << add(10, 20) << '\n';
    std::cout << "Average: " << average(10, 20) << '\n';
    return 0;
}
