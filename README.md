# C++11 Feature Tests

This repository is to test some c++11 features.

## Compiler
Program was tested on Ubuntu 16.04, using g++ 5.4.0.

To compile, run
```
g++ -o cpp-test.run *.cpp -std=c++11
```

## Contents
- [`c_str()` test](string_test.h)
- [`sizeof` test](sizeof_test.h)
- [Use a braced list as return](return_list_test.h)
- [A function that returns a pointer to an array](return_pointer_to_array_test.h)
- [C++ class test](class_test.cpp)
- [Smart pointer test](smart_ptr_test.cpp)
