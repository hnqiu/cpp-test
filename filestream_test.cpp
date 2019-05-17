/* Copyright (C) 2019 hnqiu. All rights reserved.
 * Licensed under the MIT License. See LICENSE for details.
 */


#include "filestream_test.h"

/* @brief: read data from file
 * file should have content like (ignore the indent):
   #xxx
   1
   #xx
   100.0
   #re
   2.0
 */
bool fstream_test() {
    std::string s;
    std::vector<double> tmp;

    std::string ifile("test_file");
    std::ifstream ifs(ifile);
    if (!ifs) {
        std::cout << "Error: cannot open file " << ifile << std::endl;
        return false;
    }
    while(std::getline(ifs, s)) {
        if (!s.empty()) {
            if (s[0] == '#')
                continue;
            else {
                tmp.push_back(stof(s));
            }
        }
    }
    ifs.close();

    // use "tmp" to assign variables here
    for (const auto &t : tmp) {
        std::cout << t << " ";
    }
    std::cout << std::endl;

    return true;
}
