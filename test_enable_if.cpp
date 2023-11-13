#include <iostream>

template<typename T>
std::enable_if_t<std::is_same<int, T>::value, void> foo()
{
    std::cout << "foo int\n";
}

template<typename T>
std::enable_if_t<std::is_same<float, T>::value, float> foo()
{
    std::cout << "foo float\n";
    return 1.5;
}

template<typename T, std::enable_if_t<std::is_same<double, T>::value, int> = 0>
T foo()
{
    std::cout << "foo double\n";
    return 3.0;
}

int main() {
    foo<int>();
    float r0 = foo<float>();
    std::cout << r0 << "\n";
    double r1 = foo<double>();
    std::cout << r1 << "\n";
}
