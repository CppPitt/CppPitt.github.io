#include "isIntOdd.h"
#include "isIntegralValueOdd.hpp"

bool isIntOdd(int x)
{
    return isIntegralValueOdd<int>(x);
}
