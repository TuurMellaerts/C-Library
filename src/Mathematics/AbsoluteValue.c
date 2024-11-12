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

int16_t AbsoluteValue_SignedInteger16(int16_t number)
{
    return (number < 0) ? -number : number;
}

int32_t AbsoluteValue_SignedInteger32(int32_t number)
{
    return (number < 0) ? -number : number;
}

int64_t AbsoluteValue_SignedInteger64(int64_t number)
{
    return (number < 0) ? -number : number;
}
