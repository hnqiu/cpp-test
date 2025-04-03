#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char* argv[])
{
    std::vector<double> v;
    double e{0.5};
    v.push_back(e);
    v.push_back(e);
    v.push_back(e);

    double result = std::accumulate(v.begin(), v.end(), 0);

    // result is 0 because accumulate deduces return type from the init value
    std::cout << result << std::endl;
    return 0;
}
