/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "template_test.h"

int template_test() {
    Layer<SigmNeuron*> layer;
    SigmNeuron *node = new SigmNeuron(1);
    layer.push_back(node);
    layer.neurons[0]->set_input(0.5);
    //layer.neurons[0]->activate();
    std::cout << "Layer size is " << layer.size() << std::endl;

    int i = 0;
    for (const auto n : layer.neurons) {
        std::cout << "Node " << i++ << "'s output is " << n->activate() << std::endl;
    }

    // for (auto n : layer.neurons) {
    //     delete node;
    // }
    
    return 0;
}

int template_test_v2() {
    Network<SigmNeuron*, SigmNeuron*, SigmNeuron*> net;
    net.push_ineuron(new SigmNeuron(1));
    net.push_hneuron(new SigmNeuron(2));
    net.push_oneuron(new SigmNeuron(3));
    std::cout << "Network size is " << net.size() << std::endl;

    return 0;
}