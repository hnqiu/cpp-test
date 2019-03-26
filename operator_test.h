/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#pragma once

#include <iostream>

int operator_test();

class Agent_t
{
private:
    /* data */
    size_t a_id;
    double fit;
public:
    Agent_t(const size_t &aid, const double &f) : a_id(aid), fit(f) { }
    Agent_t(const size_t &aid) : a_id(aid), fit(.0) { }
    Agent_t(const Agent_t &agt) : a_id(agt.a_id), fit(agt.fit) { }
    ~Agent_t() = default;

    Agent_t& operator=(const Agent_t &agt) {
        a_id = agt.a_id;
        fit = agt.fit;
        return *this;
    }
    bool operator==(const Agent_t &agt) const {
        return fit == agt.fit;
    }
    bool operator!=(const Agent_t &agt) const {
        return !(*this == agt);
        // equivalent to 
        // return fit != agt.fit;
    }
    bool operator<(const Agent_t &agt) const {
        return fit < agt.fit;
    }

    size_t getID() { return a_id; }
    double getFit() { return fit; }
    void setFit(const double &f) { fit = f; }
};
