/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#pragma once

#include <iostream>
#include <ctime>
#include <chrono>

/* @brief: print number of operation in 10s
 * time is measured using c-style clock
 */
int c_clock_test();

/* @brief: print number of operation in 10s
 * time is measured using c++11 clock
 */
int cpp_clock_test();
