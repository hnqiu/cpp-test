#include <iostream>
#include <memory>
#include <vector>


void foo(std::vector<std::shared_ptr<const int>> v)
{
}

int main(int argc, char* argv[])
{
    std::vector<std::shared_ptr<const int>> a;
    std::vector<std::shared_ptr<int>> b;
    // std::shared_ptr<const int> b = std::make_shared<const int>(2);

    // foo(a) is ok but foo(b) is not
    foo(a);
    // foo(b);
}

