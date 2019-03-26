/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "predicate_test.h"

bool smaller_agent(const Agent_t &a1, const Agent_t &a2) {
    return a1 < a2;
}

int predicate_test() {
    std::vector<Agent_t> agents;
    agents.emplace_back(1, 5.0);
    agents.emplace_back(2, 2.0);

    std::cout << "agents has " << agents.size() << " elements: \n";
    int i = 0;
    for (auto &e : agents) {
        std::cout << "#" << i++ << "'s id is " << e.getID() 
            << ", fit is " << e.getFit() << std::endl;
    }

    std::stable_sort(agents.begin(), agents.end(), smaller_agent);
    std::cout << "agents sorted!\n";
    i = 0;
    for (auto &e : agents) {
        std::cout << "#" << i++ << "'s id is " << e.getID() 
            << ", fit is " << e.getFit() << std::endl;
    }

    return 0;
}
