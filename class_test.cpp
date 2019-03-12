/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include <iostream>
#include "class_test.h"

using std::cout; 
using std::endl;

// static member initialized outside the class body
int an_agent::class_id = 1;

// functions that are not inline should be defined in src file
void set_fit(an_agent *agt, double f) {
    agt->fit = f;
}


int class_test() {
    int aid = 0;

    an_agent *agt = new an_agent(1);
    cout << "agent id is " << agt->get_id() << endl;
    aid = agt->set_agent(2).get_id();
    cout << "agent id is changed to " << aid << endl;
    
    cout << "agent fitness is " << agt->get_fit() << endl;
    set_fit(agt, 10);
    cout << "agent fitness is changed to " << agt->get_fit() << endl;

    delete agt;

    return 0;
}
