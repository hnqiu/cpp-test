#include <iostream>
#include <map>
#include <string>

void foo()
{
    std::map<std::string, int> m
    {
        {"ab", 0},
    };

    std::map<std::pair<std::string, std::string>, int> n
    {
        {{"ab", "abb"}, 0},
    };

    // this won't work
    // std::map<std::initializer_list<std::string>, int> t
    // {
    //     {{"ab", "abb"}, 0},
    // };
}

int main(int argc, char* argv[])
{
    foo();
    std::cout << "test_map complete\n";
}
