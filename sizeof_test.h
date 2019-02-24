/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */


#ifndef CPP_SIZEOF_TEST_H
#define CPP_SIZEOF_TEST_H

#include <iostream>
#include <string>

int sizeof_test() {
    std::string ss = "xxx";
    const char *s = ss.c_str();
    std::cout << "Size of 's' is " << sizeof(s) << ".\n"; // returns the size of the pointer
    std::cout << "Size of '*s' is " << sizeof(*s) << "." << std::endl; // size of an object of the type

    return 0;
}

#endif  // CPP_SIZEOF_TEST_H
