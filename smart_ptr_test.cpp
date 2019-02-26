/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */


#include <iostream>
#include <memory>
#include <vector>
#include "class_test.h"

int smart_ptr_test() {
    std::shared_ptr<an_agent> agt = std::make_shared<an_agent>(1);
    std::vector<decltype(agt)> agents;
    agents.push_back(agt);

    auto first_elem = agents.begin();
    std::cout << "agent's id is " << (*first_elem)->get_id() << std::endl;

    return 0;
}
