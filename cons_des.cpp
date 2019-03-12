/* Copyright (C) 2019 hnqiu. All rights reserved.
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
    auto new_agt = agt; // call copy constructor
    new_agt = agt; // call copy-assignment constructor
    agents.push_back(new_agt); // call copy constructor

    return 0;
}

