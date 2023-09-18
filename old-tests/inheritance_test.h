/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#pragma once

#include <iostream>
#include <cmath>


int inheritance_test();


/* Neuron is an abstract class type
 */
class Neuron
{
private:
    /* data */
    int n_id;
public:
    Neuron(const int &nid) : n_id(nid) { }
    virtual ~Neuron() {
        #ifndef NDEBUG
        std::cout << "Destructing Base Neuron..." << std::endl;
        #endif
    }

    virtual double activate() = 0;
};


class SigmNeuron : public Neuron
{
private:
    /* data */
    double inp, outp;
public:
    SigmNeuron(const int &nid): Neuron(nid), inp(), outp() { }
    SigmNeuron() : SigmNeuron(0) { }
    ~SigmNeuron() override {
        #ifndef NDEBUG
        std::cout << "Destructing Derived SigmNeuron..." << std::endl;
        #endif
    }

    void set_input(const double &val) {
        inp = val;
        std::cout << "set input to " << inp << std::endl;
    }
    double activate() override {
        outp = 1 / (1+std::exp(-inp));
        // std::cout << "neuron output is " << outp << std::endl;
        return outp;
    }
};

