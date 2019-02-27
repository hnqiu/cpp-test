/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */


#ifndef CPP_CONS_DES_TEST_H
#define CPP_CONS_DES_TEST_H

#include <iostream>
#include <vector>

int cons_des();

/* use class constructor, copy constructor and destructor */
class agent_type
{
private:
    /* data */
    int agt_id;
    std::vector<double> *errs;
public:
    // constructor
    agent_type(int aid, const std::vector<double> &v = std::vector<double>()):
    agt_id(aid), errs(new std::vector<double>(v)) {
        std::cout << "Constructing class\n";
    }
    // std::vector<double>(v) means
    // to use the copy constructor of "vector" to create a copy of "v"
    // Then we use "new" to assign the pointer to "errs"

    // default constructor is delegated
    // std::vector<double>(0.1) is a temporary vector
    agent_type(): agent_type(1, std::vector<double>(2, 0.1)) {
        std::cout << "Use default constructor\n";
    }

    // copy constructor
    agent_type(const agent_type &agt):
    agt_id(agt.agt_id), errs(new std::vector<double>(*agt.errs)) {
        std::cout << "Use copy constructor\n";
    }

    //agent_type &operator=(const agent_type &agt);

    // destructor
    ~agent_type() { 
        // use `g++ -DNDEBUG` to disable debug info
        #ifndef NDEBUG
        std::cout << "Destructing class\n";
        #endif

        delete errs; 
    }

    inline std::vector<double> *get_err();
};

std::vector<double> *agent_type::get_err() {
    return errs;
}


#endif  // CPP_CONS_DES_TEST_H