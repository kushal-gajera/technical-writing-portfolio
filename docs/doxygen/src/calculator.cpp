/** @file calculator.cpp @brief Implements Calculator operations. */
#include "calculator.hpp"
#include <stdexcept>
double Calculator::add(double lhs, double rhs) const { return lhs + rhs; }
double Calculator::subtract(double lhs, double rhs) const { return lhs - rhs; }
double Calculator::multiply(double lhs, double rhs) const { return lhs * rhs; }
double Calculator::divide(double numerator, double denominator) const {
    if (denominator == 0.0) throw std::invalid_argument("Cannot divide by zero.");
    return numerator / denominator;
}
