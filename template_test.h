/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#pragma once

#include <vector>
#include "inheritance_test.h"

int template_test();
int template_test_v2();

template <typename T>
class Layer
{
public:
    /* data */
    std::vector<T> neurons;
    
    typedef typename std::vector<T>::size_type size_type;

    Layer() = default;
    ~Layer() {
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


template <typename Ti, typename Th, typename To>
class Network
{
public:
    /* data */
    std::vector<Ti> ineurons;
    std::vector<Th> hneurons;
    std::vector<To> oneurons;

    typedef unsigned long size_type;

    Network() = default;
    ~Network() {
        #ifndef NDEBUG
        std::cout << "Deleting ineurons..." << std::endl;
        #endif
        for (auto n : ineurons) {
            delete n;
        }
        #ifndef NDEBUG
        std::cout << "Deleting hneurons..." << std::endl;
        #endif
        for (auto n : hneurons) {
            delete n;
        }
        #ifndef NDEBUG
        std::cout << "Deleting oneurons..." << std::endl;
        #endif
        for (auto n : oneurons) {
            delete n;
        }
    }

    size_type size() const { return ( ineurons.size() + hneurons.size() + oneurons.size() ); }
    void push_ineuron(const Ti &t) { ineurons.push_back(t); }
    void push_hneuron(const Th &t) { hneurons.push_back(t); }
    void push_oneuron(const To &t) { oneurons.push_back(t); }
};

