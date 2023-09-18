#include "test_common.h"

#include <iostream>

bool foo(bool f)
{
    f = true;
    return f;
}

void test_const_param()
{
    const bool f{false};
    auto r = foo(f);
    std::cout << "flag = " << r << std::endl;
}
