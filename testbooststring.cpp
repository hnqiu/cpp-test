#include "test_common.h"

#include <boost/algorithm/string.hpp>
#include <iostream>
#include <vector>

std::vector<std::string> splitString(std::string& in)
{
    boost::trim(in);
    std::vector<std::string> result{};
    boost::split(result, in, boost::is_any_of("|"));
    std::cout << "input now is: " << in << "\n";
    return result;
}

void test_boost_string()
{
    std::string in{" some|test|strings "};
    auto result = splitString(in);
    for (const auto s : result)
    {
        std::cout << s << "\n";
    }
    std::cout << "outer input now is: " << in << "\n";
    return;
}
