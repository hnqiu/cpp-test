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

class an_agent
{
    friend void set_fit(an_agent *agt, double f);
private:
    /* data */
    static int class_id;
    int agt_id;
    double fit;
public:
    // functions defined in the class are implicitly inline

    // use constructor initialization instead of assignment
    an_agent(int aid, double f): agt_id(aid), fit(f) {
        std::cout << "Constructing class\n";
    }
    // use delegating constructor
    an_agent(int aid): an_agent(aid, .0) {}
    an_agent(): an_agent(0, .0) {}

    ~an_agent() {
        std::cout << "Destructing class\n";
    }

    // return reference to *this
    an_agent &set_agent(int aid);

    // return reference to const *this
    // this function is useless, just a demonstration
    const an_agent &get_agent() const { return *this; }

    // const member function
    // explicit inline
    inline const double get_id() const;
    inline const double get_fit() const;
};

// explicit inline
inline an_agent &an_agent::set_agent(int aid) {
    agt_id = aid;
    return *this;
}

const double an_agent::get_id() const {
    return agt_id;
}

const double an_agent::get_fit() const {
    return fit;
}


//#endif  // CPP_CLASS_TEST_H
