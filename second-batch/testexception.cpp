#include "test_common.h"
#include <iostream>
#include <exception>

double division(int a, int b)
{
    if( b == 0 )
    {
        throw std::exception();
    }
    return (a/b);
}

void test_exception()
{
    int x{50};
    int y{0};
 
    try
    {
        double z = division(x, y);
        std::cout << "result = " << z << std::endl;
    }
    catch (const char* msg)
    {
        std::cerr << msg << std::endl;
    }
    catch (int e_code)
    {
        std::cout << "error code\n";
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << " exception occurred\n";
    }

    std::cout << "continue..." << std::endl;
}
