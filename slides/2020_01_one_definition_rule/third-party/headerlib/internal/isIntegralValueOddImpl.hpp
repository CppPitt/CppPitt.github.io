#include <cassert>
#include <stdexcept>
#include <type_traits>

template <typename T>
inline bool isIntegralValueOdd(T input)
{
    if (std::is_integral<T>::value) 
    {
        assert(input > 0);
        return input % 2;
    }
    else
    {
        throw std::logic_error("Integral value required");
    }
}
