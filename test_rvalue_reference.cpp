#include <iostream>


void foo(const int& i)
{
    std::cout << "const lvalue reference " << i << std::endl;
}

void foo(int&& i)
{
    std::cout << "rvalue reference " << i << std::endl;
}

int main()
{
    foo(1); // this will call foo(int&&).
            // However, if foo(int&&) is undefined, it will call foo(const int&),
            // because const lvalue reference can refer to rvalue.
    return 0;
}
