/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */

#include <memory>
#include "cons_des.h"

/* use class constructor, copy constructor and destructor */
int cons_des() {
    agent_type agt; // call default constructor
    std::cout << "agent errs are ";
    for (auto e : *(agt.get_err())) {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    std::vector<decltype(agt)> agents;
    agents.push_back(agt); // call copy constructor


    return 0;
}

//push_back