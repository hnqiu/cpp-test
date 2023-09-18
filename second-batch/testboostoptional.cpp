#include "test_common.h"
#include <boost/optional.hpp>
#include <boost/optional/optional_io.hpp>

#include <iostream>


int foo()
{
    return 42;
}

void test_boost_optional()
{
    boost::optional<int> rslt;
    std::cout << "boost optional's value is " << rslt << std::endl;
    rslt = foo();
    // rslt.get();
    std::cout << "boost optional's value is " << rslt << std::endl;
}

