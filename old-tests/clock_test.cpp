/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "clock_test.h"

/* @brief: print number of operation in 10s
 * time is measured using c-style clock
 */
int c_clock_test() {
    std::clock_t start = std::clock();
    double duration = .0;
    long long count = 0;
    while (duration < 10.0) {
        ++count;
        duration = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC;
    }
    std::cout << "count reaches " << count << " in " << duration << "s" << std::endl;
    return 0;
}


/* @brief: print number of operation in 10s
 * time is measured using c++11 clock
 */
int cpp_clock_test() {
    using Clock = std::chrono::system_clock;
    std::chrono::seconds duration;
    auto start = Clock::now();
    long long count = 0;
    do {
        ++count;
        duration = std::chrono::duration_cast<std::chrono::seconds>(Clock::now() - start);
    } while (duration.count() < 10.0);
    std::cout << "count reaches " << count << " in " << duration.count() << "s" << std::endl;
    return 0;
}
