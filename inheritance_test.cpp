/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include <iostream>
#include <vector>
#include "inheritance_test.h"

int inheritance_test() {
    std::vector<Neuron*> nodes;
    nodes.emplace_back(new SigmNeuron(1));
    //nodes.emplace_back(new SigmNeuron(2));
    static_cast<SigmNeuron*>(nodes[0])->set_input(0.5);
    double outp = nodes[0]->activate();
    std::cout << "Neuron output is " << outp << std::endl;

    for (auto node : nodes)
        delete node;
    return 0;
}

