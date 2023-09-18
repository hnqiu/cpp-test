#include "test_common.h"
#include "testref.h"
#include <iostream>


void test_ref()
{
    std::cout << "testing argument as reference: \n";
    double foo{1.5};
    updateFoo(foo);
    std::cout << "foo = " << foo << "\n";
}

void updateFoo(double& foo)
{
    foo = 4.2;
}
