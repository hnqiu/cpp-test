/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#ifndef CPP_CONTINUE_TEST_H
#define CPP_CONTINUE_TEST_H

#include <iostream>
#include <string>


int continue_test() {
    std::string s1("Hello world.");
    const char *space = " ";
    for (auto c : s1) {
        // the type of 'c' is 'char'
        if (c == *space)
            continue;
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}

#endif  // CPP_CONTINUE_TEST_H
