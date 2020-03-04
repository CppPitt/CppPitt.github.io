#pragma once

/// @brief Determine if integral value is odd
/// Accept a value with an integral type, and determine if it is odd.
/// @throws std::logic_error if type is not integral
/// @param input Input value, must be integral type and greater than zero
/// @return True if input is
template <typename T>
inline bool isIntegralValueOdd(T input);

#include "internal/isIntegralValueOddImpl.hpp"
