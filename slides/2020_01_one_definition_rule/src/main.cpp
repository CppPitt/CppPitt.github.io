#include "isIntOdd.h"
#include "isIntEven.h"

#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
    const std::vector<int32_t> test_inputs{ -2, -1, 0, 1, 2 };

    for (const auto& input : test_inputs) {

        std::cout << "Is " << input << " even? ";
        std::cout << std::boolalpha << isIntEven(input) << '\n';

        std::cout << "Is " << input << "  odd? ";
        std::cout << std::boolalpha << isIntOdd(input) << '\n';
    }
    return 0;
}
