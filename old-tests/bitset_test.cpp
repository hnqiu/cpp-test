/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "bitset_test.h"

/* @brief: bitset test */
int bitset_test() {
    std::bitset<10> bit_train;
    bit_train.set(2);
    bit_train.set(3);
    std::cout << bit_train.count() << " bits are set as 1" << std::endl;
    std::cout << bit_train << std::endl;
    std::cout << (bit_train<<1) << std::endl;

    return 0;
}
