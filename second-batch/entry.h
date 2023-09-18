#pragma once

#include <iostream>
#include <string>

class Entry
{
public:
    std::string _s{"str"};
    Entry(const std::string& s)
    : _s(s)
    {
        std::cout << "Call Constructor\n";
    }
    Entry()
    {
        std::cout << "Call Default Constructor\n";
    }
    Entry(const Entry& e)
    : _s(e._s)
    {
        std::cout << "Call Copy Constructor\n";
    }
    ~Entry()
    {
        std::cout << "Call Destructor\n";
    }
};




