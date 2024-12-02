// empty base optimization

#include <iostream>

class Base {};

class Derive : public Base
{
    int i;
};

int main(int argc, char* argv[])
{
    std::cout << "Base size: " << sizeof(Base) << std::endl;
    std::cout << "Derive size: " << sizeof(Derive) << std::endl;
    return 0;
}
