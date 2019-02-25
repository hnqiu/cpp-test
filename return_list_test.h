/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */


#ifndef CPP_RETURN_LIST_TEST_H
#define CPP_RETURN_LIST_TEST_H

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> return_a_msg() {
    return {"Return ", "a ", "braced ", "list"};
}

int return_list_test() {
    std::vector<std::string> a_msg = return_a_msg();
    for (auto &v : a_msg)
        std::cout << v;
    std::cout << std::endl;

    return 0;
}

#endif  // CPP_RETURN_LIST_TEST_H
