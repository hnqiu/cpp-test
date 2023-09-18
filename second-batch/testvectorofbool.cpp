#include "test_common.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


void test_vector_of_bool()
{
    size_t LIST_SIZE{3};
    std::vector<bool> bool_list(LIST_SIZE, false);
    for (size_t i = 1; i < LIST_SIZE; i++)
    {
        bool_list[i] = true;
    }
    std::string rslt = std::all_of(bool_list.begin(), bool_list.end(), [](const auto& b) { return b; }) ? "ALL TRUE" : "NOT ALL TRUE";
    std::cout << rslt << "\n";
}
