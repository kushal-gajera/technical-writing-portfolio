/**
 * @file calculator.hpp
 * @brief Declares a small calculator class used in the course examples.
 */
#ifndef CAMPUS_UTILITY_CALCULATOR_HPP
#define CAMPUS_UTILITY_CALCULATOR_HPP
#include <stdexcept>

/** @brief Provides basic arithmetic operations. */
class Calculator {
public:
    /** @brief Adds two numbers.
     *  @param lhs First operand.
     *  @param rhs Second operand.
     *  @return The sum of lhs and rhs.
     */
    double add(double lhs, double rhs) const;

    /** @brief Subtracts the second number from the first.
     *  @param lhs Number from which rhs is subtracted.
     *  @param rhs Number to subtract.
     *  @return The difference lhs - rhs.
     */
    double subtract(double lhs, double rhs) const;

    /** @brief Multiplies two numbers.
     *  @param lhs First factor.
     *  @param rhs Second factor.
     *  @return The product of lhs and rhs.
     */
    double multiply(double lhs, double rhs) const;

    /** @brief Divides the first number by the second.
     *  @param numerator Number to be divided.
     *  @param denominator Number by which numerator is divided.
     *  @return The quotient.
     *  @throws std::invalid_argument If denominator is zero.
     */
    double divide(double numerator, double denominator) const;
};
#endif
