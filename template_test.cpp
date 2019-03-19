/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "template_test.h"

int template_test() {
    Network<SigmNeuron*> net;
    SigmNeuron *node = new SigmNeuron(1);
    net.push_back(node);
    net.neurons[0]->set_input(0.5);
    //net.neurons[0]->activate();
    std::cout << "Net size is " << net.size() << std::endl;

    int i = 0;
    for (const auto n : net.neurons) {
        std::cout << "Node " << i++ << "'s output is " << n->activate() << std::endl;
    }

    // for (auto n : net.neurons) {
    //     delete node;
    // }
    
    return 0;
}