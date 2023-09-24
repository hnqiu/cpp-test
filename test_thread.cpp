#include <chrono>
#include <thread>
#include <iostream>

void foo()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "foo complete\n";
}

int main(int argc, char* argv[])
{
    std::thread t(foo);
    // t.join();
    std::cout << "main complete\n";
}
