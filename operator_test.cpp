/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "operator_test.h"

int operator_test() {
    Agent_t agent1(1);
    Agent_t agent2 = agent1;
    if (agent1 == agent2) {
        std::cout << "agent1 equals agent2" << std::endl;
    }
    
    agent2.setFit(5.0);
    if (agent1 != agent2) {
        if (agent1 < agent2) {
            std::cout << "agent1 is smaller than agent2" << std::endl;
        }
        else {
            std::cout << "agent1 is greater than agent2" << std::endl;
        }
    }
    

    return 0;
}