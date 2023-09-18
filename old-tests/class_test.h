/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


/* header guard
 * pragma is non-standard
 * but easier to code and less likely to make mistakes
 * than #ifndef guard
 */ 
#pragma once
// #ifndef CPP_CLASS_TEST_H
// #define CPP_CLASS_TEST_H

int class_test();
int smart_ptr_test();

class Agent
{
    friend void set_fit(Agent *agt, double f);
private:
    /* data */
    static int class_id;
    int agt_id;
    double fit;
public:
    // functions defined in the class are implicitly inline

    // use constructor initialization instead of assignment
    Agent(int aid, double f): agt_id(aid), fit(f) {
        std::cout << "Constructing class\n";
    }
    // use delegating constructor
    Agent(int aid): Agent(aid, .0) {}
    Agent(): Agent(0, .0) {}

    ~Agent() {
        std::cout << "Destructing class\n";
    }

    // return reference to *this
    Agent &set_agent(int aid);

    // return reference to const *this
    // this function is useless, just a demonstration
    const Agent &get_agent() const { return *this; }

    // const member function
    // explicit inline
    inline const double get_id() const;
    inline const double get_fit() const;
};

// explicit inline
inline Agent &Agent::set_agent(int aid) {
    agt_id = aid;
    return *this;
}

const double Agent::get_id() const {
    return agt_id;
}

const double Agent::get_fit() const {
    return fit;
}


//#endif  // CPP_CLASS_TEST_H
