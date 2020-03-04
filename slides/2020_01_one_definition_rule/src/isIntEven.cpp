#include "isIntEven.h"
#include "isIntegralValueOdd.hpp"

bool isIntEven(int x)
{
    return !isIntegralValueOdd<int>(x);
}
