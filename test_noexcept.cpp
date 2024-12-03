#include <iostream>
#include <stdexcept>

void mayThrow()
{
    throw std::runtime_error("Error occurred");
}

void noThrow() noexcept
{
    mayThrow(); // This will lead to std::terminate
}

int main()
{
    try
    {
        noThrow();
    }
    catch (const std::exception &e)
    {
        std::cout << "Caught exception: " << e.what() << "\n";
    }
    return 0;
}
