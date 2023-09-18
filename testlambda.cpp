#include "test_common.h"
#include "entry.h"

#include <algorithm>
#include <iostream>
#include <vector>


void test_lambda()
{
    std::vector<Entry> vec_e{10, Entry("A")};
    std::cout << "Vector vec_e of Entry created\n\n";

    // Entry bench;
    std::vector<Entry> vec_bench{1, Entry()};
    std::cout << std::endl;

    bool flag = std::none_of(vec_e.begin(), vec_e.end(), [=](Entry& e) { return e._s == vec_bench[0]._s; });
    std::cout << "first e has: " << vec_e.begin()->_s << "\n";
    std::cout << "flag = " << flag << std::endl;
}

