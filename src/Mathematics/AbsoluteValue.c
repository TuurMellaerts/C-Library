/**
 * @file AbsoluteValue.c
 * @brief Provides an implementation to calculate the absolute value of a given number.
 * @author Tuur Mellaerts
 */

// Header file
#include "../../include/Mathematics/AbsoluteValue.h"

int8_t AbsoluteValue_SignedInteger8(int8_t number)
{
    return (number < 0) ? -number : number;
}
