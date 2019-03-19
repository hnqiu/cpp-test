/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#pragma once

#include <vector>
#include "inheritance_test.h"

int template_test();

template <typename T>
class Network
{
public:
    /* data */
    std::vector<T> neurons;
    
    typedef typename std::vector<T>::size_type size_type;

    Network() = default;
    ~Network() {
        #ifndef NDEBUG
        std::cout << "Deleting neurons..." << std::endl;
        #endif
        for (auto n : neurons) {
            delete n;
        }
    }

    void push_back(const T &t) { neurons.push_back(t); }
    size_type size() const { return neurons.size(); }
};


