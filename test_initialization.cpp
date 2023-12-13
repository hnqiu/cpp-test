
#include <iostream>

int main(int argc, char* argv[])
{
    int i = 10.2; // ok
    int j(10.2); // ok
    // int k{10.2}; // error
    std::cout << "i = " << i << std::endl;
    std::cout << "j = " << j << std::endl;
    return 0;
}
