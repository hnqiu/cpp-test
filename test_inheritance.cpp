#include <iostream>

class Base
{
public:
    int a;
};

class Derived : public Base
{
public:
    int a;
    int getAFromBase()
    {
        return Base::a;
    }
};


int main(int argc, char* argv[])
{
    Derived d;
    d.a = 9;
    d.Base::a = 8;
    std::cout << "a_derived = " << d.a << "; a_base = " << d.getAFromBase() << "\n";
}

