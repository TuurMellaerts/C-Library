/**
 * @file AbsoluteValue.h
 * @brief Provides an interface to calculate the absolute value of a given number.
 * @author Tuur Mellaerts
 */
#pragma once

// General includes
#include <stdint.h>

/**
 * @brief Returns the absolute value of the given `int8_t` number.
 * @param number the given number
 * @return `int8_t` the absolute value of the given number
 */
int8_t AbsoluteValue_SignedInteger8(int8_t number);

/**
 * @brief Returns the absolute value of the given `int16_t` number.
 * @param number the given number
 * @return `int16_t` the absolute value of the given number
 */
int16_t AbsoluteValue_SignedInteger16(int16_t number);

/**
 * @brief Returns the absolute value of the given `int32_t` number.
 * @param number the given number
 * @return `int32_t` the absolute value of the given number
 */
int32_t AbsoluteValue_SignedInteger32(int32_t number);

/**
 * @brief Returns the absolute value of the given `int64_t` number.
 * @param number the given number
 * @return `int64_t` the absolute value of the given number
 */
int64_t AbsoluteValue_SignedInteger64(int64_t number);
