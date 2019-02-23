#ifndef CPP_STRING_TEST_H
#define CPP_STRING_TEST_H

#include <iostream>
#include <string>


// use c_str() to return a C-style character string
int string_test() {
    std::string s1("Hello world.");
    const char *c_s1 =s1.c_str();
    std::cout << c_s1 << std::endl;

    return 0;
}

#endif  //CPP_STRING_TEST_H
