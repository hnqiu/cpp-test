#include <iostream>

class A
{
public:
    virtual void self()
    {
        std::cout << "A\n";
    }
};

class B : public A
{
public:
    void self() override
    {
        std::cout << "B\n";
    }
};


void print_copy(A a)
{
    a.self();
}

void print_ref(A& a)
{
    a.self();
}

int main()
{
    B b;
    print_copy(b); // this prints A
    print_ref(b); // this prints B
    return 0;
}
