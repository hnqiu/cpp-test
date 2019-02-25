/* Copyright (C) 2019 hnqiu
 * Licensed under the MIT License. See LICENSE for details.
 */


#ifndef CPP_RETURN_POINTER_ARRAY_TEST_H
#define CPP_RETURN_POINTER_ARRAY_TEST_H

#include <iostream>

// use trailing return type
// equilavent to int (*an_array(param))[3]
auto val_array(int(*v)[3]) -> int(*)[3] {
    return v;
}

int return_pointer_to_array_test() {
    int vals[] = {0, 1, 2};
    int (*vals_addr)[3] = val_array(&vals);
    std::cout << (*vals_addr)[0] << (*vals_addr)[1] << (*vals_addr)[2] << std::endl;

    return 0;
}

#endif  // CPP_RETURN_POINTER_ARRAY_TEST_H
