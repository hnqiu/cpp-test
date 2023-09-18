#include "test_common.h"

#include <iostream>
#include <map>

void test_std_map()
{
    std::map<int, double> map = {
        {0, 2.0},
        {1, 3.0}
    };
    map[2];

    std::cout << "map:\n";
    for (const auto& m : map)
    {
        std::cout << m.first << " -> " << m.second << "\n";
    }
}
